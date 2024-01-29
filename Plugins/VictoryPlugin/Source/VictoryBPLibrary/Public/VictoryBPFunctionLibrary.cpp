// Copyright Rama All Rights Reserved.

#include "VictoryBPFunctionLibrary.h"
#include "VictoryBPLibrary.h"

//For GEngine->
#include "Engine/Engine.h"

//My Favorites! <3 Rama
#include "UObject/UObjectIterator.h"
#include "EngineUtils.h"

//UE UI
#include "Framework/Application/SlateApplication.h"

//Yippeee!
#include "Kismet/GameplayStatics.h"

//OS
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/PlatformApplicationMisc.h"

//Capture2D
#include "Engine/Texture2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/SceneCapture2D.h"

//Char
#include "GameFramework/Character.h"

//Skel
#include "Components/SkeletalMeshComponent.h"

//Static Mesh Vertex Positions and Other Geometry Info
#include "Engine/StaticMesh.h"
#include "StaticMeshDescription.h"



//~~~ CreateStaticMeshAssetFromDynamicMesh ~~~
#include "GeometryFramework/Public/Components/DynamicMeshComponent.h"

//Runtime
//Engine\Plugins\Runtime\MeshModelingToolset\Source\ModelingComponents\Public\ModelingObjectsCreationAPI.h
#include "ModelingObjectsCreationAPI.h"
 
//Editor
#if WITH_EDITOR
	//"ModelingComponentsEditorOnly" in build.cs ♥ Rama
	#include "AssetUtils/CreateStaticMeshUtil.h"
#endif
//~~~~ End CreateStaticMeshAssetFromDynamicMesh ~~~



//~~~ Image Wrapper ~~~
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
//~~~ Image Wrapper ~~~

//World
#include "Engine/LevelStreaming.h"

//Config
#include "Misc/ConfigCacheIni.h"

//For PIE error messages
#include "Runtime/Core/Public/Logging/MessageLog.h"
#define LOCTEXT_NAMESPACE "VictoryBPLibrary"


bool URamaVictoryPluginCreateProcessPipe::CreatePipe()
{
	if(PipeIsValid())
	{
		//Ignore repeat creates without a close inbetween <3 Rama
		return true;
	}
	return FPlatformProcess::CreatePipe( ReadPipe, WritePipe );
}
void URamaVictoryPluginCreateProcessPipe::ClosePipe()
{
	if(PipeIsValid())
	{
		FPlatformProcess::ClosePipe(ReadPipe, WritePipe);
		ReadPipe = nullptr;
		WritePipe = nullptr;
	}
}
bool URamaVictoryPluginCreateProcessPipe::ReadFromPipe(FString& PipeContents)
{
	PipeContents = "";
	
	if(!PipeIsValid()) 
	{
		return false;
	}
	PipeContents = FPlatformProcess::ReadPipe(ReadPipe);
	return true;
}
bool URamaVictoryPluginCreateProcessPipe::PipeIsValid()
{
	return ReadPipe != nullptr && WritePipe != nullptr;
}

void URamaVictoryPluginCreateProcessPipe::BeginDestroy()
{
	Super::BeginDestroy();
	//~~~~~~~~~~~~~~~~~~~~
	
	//Close pipe if it was still open! ♥ Rama
	ClosePipe();
}


/*
	~~~ Rama File Operations CopyRight ~~~ 
	
	If you use any of my file operation code below, 
	please credit me somewhere appropriate as "Rama"
*/
template <class FunctorType>
class PlatformFileFunctor : public IPlatformFile::FDirectoryVisitor	//GenericPlatformFile.h
{
public:
	
	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		return Functor(FilenameOrDirectory, bIsDirectory);
	}

	PlatformFileFunctor(FunctorType&& FunctorInstance)
		: Functor(MoveTemp(FunctorInstance))
	{
	}

private:
	FunctorType Functor;
};

template <class Functor>
PlatformFileFunctor<Functor> MakeDirectoryVisitor(Functor&& FunctorInstance)
{
	return PlatformFileFunctor<Functor>(MoveTemp(FunctorInstance));
}

static FDateTime GetFileTimeStamp(const FString& File)
{
	return FPlatformFileManager::Get().GetPlatformFile().GetTimeStamp(*File);
}
static void SetTimeStamp(const FString& File, const FDateTime& TimeStamp)
{
	FPlatformFileManager::Get().GetPlatformFile().SetTimeStamp(*File,TimeStamp);
}	

static bool FileExists(const FString& File)
{
	return FPlatformFileManager::Get().GetPlatformFile().FileExists(*File);
}
static bool FolderExists(const FString& Dir)
{
	return FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Dir);
}
static bool RenameFile(const FString& Dest, const FString& Source)
{
	//Make sure file modification time gets updated!
	SetTimeStamp(Source,FDateTime::Now());
	
	return FPlatformFileManager::Get().GetPlatformFile().MoveFile(*Dest,*Source);
}

//Create Directory, Creating Entire Structure as Necessary
//		so if JoyLevels and Folder1 do not exist in JoyLevels/Folder1/Folder2
//			they will be created so that Folder2 can be created!

//This is my solution for fact that trying to create a directory fails 
//		if its super directories do not exist
static bool VCreateDirectory(FString FolderToMake) //not const so split can be used, and does not damage input
{
	if(FolderExists(FolderToMake))
	{
		return true;
	}
	
	// Normalize all / and \ to TEXT("/") and remove any trailing TEXT("/") if the character before that is not a TEXT("/") or a colon
	FPaths::NormalizeDirectoryName(FolderToMake);
	
	//Normalize removes the last "/", but is needed by algorithm
	//  Guarantees While loop will end in a timely fashion.
	FolderToMake += "/";
	
	FString Base;
	FString Left;
	FString Remaining;
	
	//Split off the Root
	FolderToMake.Split(TEXT("/"),&Base,&Remaining);
	Base += "/"; //add root text and Split Text to Base
	
	while(Remaining != "")
	{
		Remaining.Split(TEXT("/"),&Left,&Remaining);
		
		//Add to the Base
		Base += Left + FString("/"); //add left and split text to Base
		
		//Create Incremental Directory Structure!
		if ( ! FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*Base) && 
			! FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Base) )
		{
			return false;
			//~~~~~
		}
	}
	
	return true;
}
/*
	~~~ Rama File Operations CopyRight ~~~ 
	
	If you use any of my file operation code above, 
	please credit me somewhere appropriate as "Rama"
*/

UVictoryBPFunctionLibrary::UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


//~~~~~~~~~~~~~~~~~~~
// 	    Joy Geo
//~~~~~~~~~~~~~~~~~~~

UStaticMesh* UVictoryBPFunctionLibrary::CreateStaticMeshAssetFromDynamicMesh( 
	FString ContentFolderPath,
	UDynamicMeshComponent* DynamicMeshComp, 
	FString& Status, 
	FString& NewAssetFilePath, 
	bool& Success
){
	NewAssetFilePath = "";
	
	#if WITH_EDITOR
		
	//Comp?
	if(!DynamicMeshComp || !DynamicMeshComp->GetDynamicMesh())
	{
		Status = "No valid Dynamic Mesh Component was supplied!";
		Success = false;
		return nullptr;
	}
	
	//No Triangles?
	if(DynamicMeshComp->GetDynamicMesh()->IsEmpty())
	{
		Status = "Dynamic Mesh has no triangles!";
		Success = false;
		return nullptr;
	}
	
	//Make sure to remove extension if user added it ♥ Rama
	
	//File without any extension
	ContentFolderPath.ReplaceInline(TEXT(".uasset"),TEXT(""));
	  
	//~~~ Create possibly numbered new filename, if supplied exists! ♥ Rama
	FString FinalRelativePath = "";
	bool FolderTreeCreated = UVictoryBPFunctionLibrary::GenerateUniqueContentRelativeFileName(ContentFolderPath + ".uasset",FinalRelativePath,NewAssetFilePath);
	  
	if(!FolderTreeCreated)
	{
		Status = "Could not create the specified directory tree";
		Success = false;
		return false;
	}
	
	//Remove ext before sending to AssetUtils
	//// Path is now Relative with no extension, possibly with 1,2,3 added for each create event in editor! <3 Rama
	FinalRelativePath.ReplaceInline(TEXT(".uasset"),TEXT(""));
	
	//~~~ End of file path input handling ♥ Rama ~~~
	
	//Create Mesh Base Params
	FCreateMeshObjectParams CreateMeshParams;
	
	CreateMeshParams.BaseName 		= FinalRelativePath;
	CreateMeshParams.TargetWorld 	= nullptr;
	
	//~~~ Materials ~~~
	DynamicMeshComp->ValidateMaterialSlots();
	
	for(int32 v = 0; v < DynamicMeshComp->GetNumMaterials() ; v++)
	{
		CreateMeshParams.Materials.Add(DynamicMeshComp->GetMaterial(v));
	}
	 
	//Set from FDynamicMesh3 (the actual mesh herself, not from a MeshDescription)
	CreateMeshParams.SetMesh(DynamicMeshComp->GetMesh());
	
	//Ensure Set to DynamicMesh
	CreateMeshParams.MeshType = ECreateMeshObjectSourceMeshType::DynamicMesh;
	
	//~~~
	//~~~
	//~~~
	
	//~~~~~~~~~~~~~~~~~
	// Code from UE_5.0\Engine\Plugins\Runtime\MeshModelingToolset\Source\ModelingComponentsEditorOnly\PublicEditorModelingObjectsCreationAPI.cpp
	
	//Static Mesh!
	//CreateMeshObjectResult = EditorCreateMeshAPI->CreateStaticMeshAsset(CreateMeshParams);
	
	//Static Asset Options
	UE::AssetUtils::FStaticMeshAssetOptions AssetOptions;
	AssetOptions.NewAssetPath = "/Game/" + CreateMeshParams.BaseName;
	 
	//Ensure no // 
	FPaths::RemoveDuplicateSlashes(AssetOptions.NewAssetPath);
	 
	AssetOptions.NumSourceModels = 1;
	AssetOptions.NumMaterialSlots = CreateMeshParams.Materials.Num();
	
	//Got rid of FilterMaterials part <3 Rama
	AssetOptions.AssetMaterials = (CreateMeshParams.AssetMaterials.Num() == AssetOptions.NumMaterialSlots) 
		? CreateMeshParams.AssetMaterials 
		: CreateMeshParams.Materials;

	AssetOptions.bEnableRecomputeNormals 	= CreateMeshParams.bEnableRecomputeNormals;
	AssetOptions.bEnableRecomputeTangents 	= CreateMeshParams.bEnableRecomputeTangents;
	AssetOptions.bGenerateNaniteEnabledMesh = CreateMeshParams.bEnableNanite;
	//AssetOptions.NaniteProxyTrianglePercent = CreateMeshParams.NaniteProxyTrianglePercent;

	AssetOptions.bCreatePhysicsBody 		= CreateMeshParams.bEnableCollision;
	AssetOptions.CollisionType 				= CreateMeshParams.CollisionMode;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//Dynamic Mesh! ♥ Rama
	FDynamicMesh3* DynamicMesh = &CreateMeshParams.DynamicMesh.GetValue();
	AssetOptions.SourceMeshes.DynamicMeshes.Add(DynamicMesh);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//Static Mesh Result
	UE::AssetUtils::FStaticMeshResults ResultData;
	 
	//==========
	//CREATE!!!
	UE::AssetUtils::ECreateStaticMeshResult AssetResult = UE::AssetUtils::CreateStaticMeshAsset(AssetOptions, ResultData);
	//==========
 
	if (AssetResult != UE::AssetUtils::ECreateStaticMeshResult::Ok)
	{
		Status = "UE::AssetUtils::ECreateStaticMeshResult is ECreateModelingObjectResult::Failed_AssetCreationFailed";
		Success = false;
		return false;
	}
  
	// End of code from PublicEditorModelingObjectsCreationAPI.cpp
	//~~~~~~~~~~~~~~~~~
	
	Status = "Victory!";
	Success = true;
	return ResultData.StaticMesh;
	#endif
	
	Status = "This node is for Editor Builds only, but does create static mesh assets that can ship with your packaged game! ♥ Rama";
	Success = false;
	return nullptr;
}

bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions, int32 LodIndex)
{
	if(!Comp) 
	{
		return false;
	}
	
	TObjectPtr<UStaticMesh> MeshPtr = Comp->GetStaticMesh();
	if(!MeshPtr)
	{
		return false;
	}
	
	UStaticMeshDescription* Desc = MeshPtr->GetStaticMeshDescription(LodIndex);
	if(!Desc)
	{ 
		return false;
	}
	
	FTransform WorldTransform = Comp->GetComponentTransform();
	FVertexArray& Verts = Desc->Vertices();
	for (FVertexID EachVertId : Verts.GetElementIDs())
	{   
		VertexPositions.Add(
			WorldTransform.TransformPosition( Desc->GetVertexPosition(EachVertId) ) 
		);
	}  
	 
	return true;
}


//~~~~~~~~~~~~~~~~~~~
// 	  Load Object
//~~~~~~~~~~~~~~~~~~~
	
UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass,FName Path,bool& IsValid)
{
	IsValid = false;
	
	if(Path == NAME_None) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~
	
	UObject* LoadedObj = StaticLoadObject(ObjectClass, NULL,*Path.ToString());
	 
	IsValid = LoadedObj != nullptr;
	
	return LoadedObj;
}
FName UVictoryBPFunctionLibrary::GetObjectPath(UObject* Obj)
{
	if(!Obj) return NAME_None;
	if(!Obj->IsValidLowLevel()) return NAME_None;
	//~~~~~~~~~~~~~~~~~~~~~~~~~
	
	FSoftObjectPath ThePath = FSoftObjectPath(Obj);
		
	if(!ThePath.IsValid()) 
	{
		return "";
	}
	
	//The Class FString Name For This Object
	FString str=Obj->GetClass()->GetDescription();
	
	//Remove spaces in Material Instance Constant class description!
	str = str.Replace(TEXT(" "),TEXT(""));
	
	str += "'";
	str += ThePath.ToString();
	str += "'";
	
	return FName(*str);
}

//~~~~~~
// Math
//~~~~~~ 
void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(UPARAM(ref) int32& Int, int32 Add, int32& IntOut)
{  
	Int += Add;
	IntOut = Int; 
} 
void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(UPARAM(ref) int32& Int, int32 Sub, int32& IntOut)
{ 
	Int -= Sub;
	IntOut = Int; 
}

void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(UPARAM(ref) float& Float, float Add, float& FloatOut)
{
	Float += Add;
	FloatOut = Float;
}
void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(UPARAM(ref) float& Float, float Sub, float& FloatOut)
{
	Float -= Sub;
	FloatOut = Float; 
}


//~~~~~~~~~~~~
// 	  UMG
//~~~~~~~~~~~~	
UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly)
{
	if (!WidgetClass || !WorldContextObject)
	{
		return nullptr;
	}

	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if (!World)
	{
		return nullptr;
	}

	UUserWidget* ResultWidget = nullptr;
	for (TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
	{
		UUserWidget* LiveWidget = *Itr;

		// Skip any widget that's not in the current world context.
		if (LiveWidget->GetWorld() != World)
		{
			continue;
		}

		// Skip any widget that is not a child of the class specified.
		if (!LiveWidget->GetClass()->IsChildOf(WidgetClass))
		{
			continue;
		}
	
		if(TopLevelOnly)
		{
			//only add top level widgets
			if(LiveWidget->IsInViewport())			
			{
				ResultWidget = LiveWidget;
				break;
			}
		}
		else
		{
			ResultWidget = LiveWidget;
			break;
		} 
	}

	return ResultWidget;
}

void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<UUserWidget> WidgetClass, bool bImmediateOnly)
{
	ChildWidgets.Empty();

	if (ParentWidget && WidgetClass)
	{
		// Current set of widgets to check
		TInlineComponentArray<UWidget*> WidgetsToCheck;

		// Set of all widgets we have checked
		TInlineComponentArray<UWidget*> CheckedWidgets;

		WidgetsToCheck.Push(ParentWidget);

		// While still work left to do
		while (WidgetsToCheck.Num() > 0)
		{
			// Get the next widgets off the queue
			const bool bAllowShrinking = false;
			UWidget* PossibleParent = WidgetsToCheck.Pop(bAllowShrinking);

			// Add it to the 'checked' set, should not already be there!
			if (!CheckedWidgets.Contains(PossibleParent))
			{
				CheckedWidgets.Add(PossibleParent);

				TArray<UWidget*> Widgets;

				UWidgetTree::GetChildWidgets(PossibleParent, Widgets);

				for (UWidget* Widget : Widgets)
				{
					if (!CheckedWidgets.Contains(Widget))
					{
						// Add any widget that is a child of the class specified.
						if (Widget->GetClass()->IsChildOf(WidgetClass))
						{
							ChildWidgets.Add(Cast<UUserWidget>(Widget));
						}

						// If we're not just looking for our immediate children,
						// add this widget to list of widgets to check next.
						if (!bImmediateOnly)
						{
							WidgetsToCheck.Push(Widget);
						}
					}
				}

				if (bImmediateOnly)
				{
					break;
				}
			}
		}
	}
}


UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass)
{
	UUserWidget* ResultParent = nullptr;

	if (ChildWidget && WidgetClass)
	{
		UWidget* PossibleParent = ChildWidget->GetParent();
		UWidget* NextPossibleParent = nullptr;
		int32 count = 0;

		while (PossibleParent != nullptr)
		{
			// Return once we find a parent of the desired class.
			if (PossibleParent->GetClass()->IsChildOf(WidgetClass))
			{
				ResultParent = Cast<UUserWidget>(PossibleParent);
				break;
			}
			
			NextPossibleParent = PossibleParent->GetParent();

			// If we don't have a parent, follow the outer chain until we find another widget, if at all.
			if (NextPossibleParent == nullptr)
			{
				UWidgetTree* WidgetTree = Cast<UWidgetTree>(PossibleParent->GetOuter());
				if (WidgetTree)
				{
					NextPossibleParent = Cast<UWidget>(WidgetTree->GetOuter());
				}
			}

			PossibleParent = NextPossibleParent;
		}
	}

	return ResultParent;
}


UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(UUserWidget* ParentUserWidget, const FName& Name)
{
	UWidget* ResultWidget = nullptr;

	if (ParentUserWidget && (Name != NAME_None))
	{
		ResultWidget = ParentUserWidget->GetWidgetFromName(Name);
	}

	return ResultWidget;
}


bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass)
{ 
	if(!WidgetClass) return false;
	if(!WorldContextObject) return false;
	 
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return false;
	//~~~~~~~~~~~
	  
	for(TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
	{
		if(Itr->GetWorld() != World) continue;
		//~~~~~~~~~~~~~~~~~~~~~
		
		if( ! Itr->IsA(WidgetClass)) continue;
		//~~~~~~~~~~~~~~~~~~~
		    
		if(Itr->IsInViewport())			//IsInViewport in 4.6
		{
			return true;
		}
	}
	
	return false;
}

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass)
{
	if(!WidgetClass) return;
	if(!WorldContextObject) return;
	 
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return;
	//~~~~~~~~~~~
	 
	for(TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
	{
		if(Itr->GetWorld() != World) continue;
		//~~~~~~~~~~~~~~~~~~~~~
		
		if( ! Itr->IsA(WidgetClass)) continue;
		//~~~~~~~~~~~~~~~~~~~
		 
		//only add top level widgets
		if(Itr->IsInViewport())			//IsInViewport in 4.6
		{
			Itr->RemoveFromParent();
		}
	}
}

void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(const float& Delta)
{
	FSlateApplication::Get().OnMouseWheel(int32(Delta));
}
void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(APlayerController* ThePC, FKey Key, EInputEvent EventType)
{
	if (!ThePC) return;
	
	FInputKeyParams Params(Key, EventType, double(1.f), false); //amount depressed, bGamepad
	ThePC->InputKey(Params); 
	//! This will fire twice if the event is not handled, for umg widgets place an invisible button in background.
     
	if (Key == EKeys::LeftMouseButton || Key == EKeys::MiddleMouseButton || Key == EKeys::RightMouseButton || Key == EKeys::ThumbMouseButton || Key == EKeys::ThumbMouseButton2)
	{
		EMouseButtons::Type Button = EMouseButtons::Invalid;
		if (Key == EKeys::LeftMouseButton)
		{
			Button = EMouseButtons::Left;
		}
		else if (Key == EKeys::MiddleMouseButton)
		{
			Button = EMouseButtons::Middle;
		}
		else if (Key == EKeys::RightMouseButton)
		{
			Button = EMouseButtons::Right;
		}
		else if (Key == EKeys::ThumbMouseButton)
		{
			Button = EMouseButtons::Thumb01;
		}
		else if (Key == EKeys::ThumbMouseButton2)
		{
			Button = EMouseButtons::Thumb02;
		}


		if (EventType == IE_Pressed)
		{
			FSlateApplication::Get().OnMouseDown(nullptr, Button);
		}
		else if (EventType == IE_Released)
		{
			FSlateApplication::Get().OnMouseUp(Button);
		}
		else if (EventType == IE_DoubleClick)
		{
			FSlateApplication::Get().OnMouseDoubleClick(nullptr, Button);
		}
	}
	else
	{
		const uint32 *KeyCode = 0;
		const uint32 *CharacterCode = 0;
		FInputKeyManager::Get().GetCodesFromKey(Key, KeyCode, CharacterCode);
		uint32 KeyCodeVal = (KeyCode != NULL) ? *KeyCode : -1;
		uint32 CharacterCodeVal = (CharacterCode != NULL) ? *CharacterCode : -1;

		if (EventType == IE_Pressed)
		{
			FSlateApplication::Get().OnKeyDown(KeyCodeVal, CharacterCodeVal, false);
		}
		else if (EventType == IE_Released)
		{
			FSlateApplication::Get().OnKeyUp(KeyCodeVal, CharacterCodeVal, false);
		}
	}
}
//~~~~~~~~~~~~~~~~
//  Pixels!
//~~~~~~~~~~~~~~~~

//this is how you can make cpp only internal functions!
static EImageFormat GetJoyImageFormat(EJoyImageFormats JoyFormat)
{
	/*
	ImageWrapper.h
	namespace EImageFormat
	{
	
	Enumerates the types of image formats this class can handle
	
	enum Type
	{
		//Portable Network Graphics
		PNG,

		//Joint Photographic Experts Group 
		JPEG,

		//Single channel jpeg
		GrayscaleJPEG,	

		//Windows Bitmap 
		BMP,

		//Windows Icon resource 
		ICO,

		//OpenEXR (HDR) image file format 
		EXR,

		//Mac icon 
		ICNS
	};
};
	*/
	switch(JoyFormat)
	{
		case EJoyImageFormats::JPG : return EImageFormat::JPEG;
		case EJoyImageFormats::PNG : return EImageFormat::PNG;
		case EJoyImageFormats::BMP : return EImageFormat::BMP;
		case EJoyImageFormats::ICO : return EImageFormat::ICO;
		case EJoyImageFormats::EXR : return EImageFormat::EXR;
		case EJoyImageFormats::ICNS : return EImageFormat::ICNS;
	}
	return EImageFormat::JPEG;
} 

static FString GetJoyImageExtension(EJoyImageFormats JoyFormat)
{
	switch(JoyFormat)
	{
		case EJoyImageFormats::JPG : return ".jpg";
		case EJoyImageFormats::PNG : return ".png";
		case EJoyImageFormats::BMP : return ".bmp";
		case EJoyImageFormats::ICO : return ".ico";
		case EJoyImageFormats::EXR : return ".exr";
		case EJoyImageFormats::ICNS : return ".icns";
	}
	return ".png";
} 

UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath,EJoyImageFormats ImageFormat,bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels)
{
	//Clear any previous data
	OutPixels.Empty();
	
	IsValid = false;
	UTexture2D* LoadedT2D = NULL;
	
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));
 
	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	  
	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{  
		TArray<uint8> UncompressedRGBA ;
		if (ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA))
		{
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_R8G8B8A8);
			
			//Valid?
			if(!LoadedT2D || !LoadedT2D->GetPlatformData()) return NULL;
			//~~~~~~~~~~~~~~
			
			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();
			
			const TArray<uint8>& ByteArray = UncompressedRGBA;
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			
			for(int32 v = 0; v < ByteArray.Num(); v+=4) 
			{ 
				if(!ByteArray.IsValidIndex(v+3)) 
				{ 
					break;
				}   
				     
				OutPixels.Add(
					FLinearColor(
						ByteArray[v],		//R
						ByteArray[v+1],		//G
						ByteArray[v+2],		//B
						ByteArray[v+3] 		//A
					)
				);
			}
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			   
			//Copy!
			void* TextureData = LoadedT2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedRGBA.GetData(), UncompressedRGBA.Num());
			LoadedT2D->GetPlatformData()->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}
	 
	// Success!
	IsValid = true;
	return LoadedT2D;
	
}
bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(const TArray<FLinearColor>& Pixels,int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor)
{
	int32 Index = y * ImageHeight + x;
	if(!Pixels.IsValidIndex(Index))
	{
		return false;
	}
	 
	FoundColor = Pixels[Index];
	return true;
}


bool UVictoryBPFunctionLibrary::Victory_SavePixels(
	const FString& FullFilePath
	, int32 Width, int32 Height 
	, const TArray<FLinearColor>& ImagePixels
	, bool SaveAsBMP
	, bool sRGB
	, FString& ErrorString
){
	if(FullFilePath.Len() < 1) 
	{
		ErrorString = "No file path";
		return false;
	}
	//~~~~~~~~~~~~~~~~~
	
	//Ensure target directory exists, 
	//		_or can be created!_ <3 Rama
	FString NewAbsoluteFolderPath = FPaths::GetPath(FullFilePath);
	FPaths::NormalizeDirectoryName(NewAbsoluteFolderPath);
	if(!VCreateDirectory(NewAbsoluteFolderPath)) 
	{
		ErrorString = "Folder could not be created, check read/write permissions~ " + NewAbsoluteFolderPath;
		return false;
	}
	
	//Create FColor version
	TArray<FColor> ColorArray;
	for(const FLinearColor& Each : ImagePixels)
	{  
		ColorArray.Add(Each.ToFColor(sRGB));  
	} 
	  
	if(ColorArray.Num() != Width * Height) 
	{
		ErrorString = "Error ~ height x width is not equal to the total pixel array length!";
		return false;
	}
	  
	//Remove any supplied file extension and/or add accurate one
	FString FinalFilename = FPaths::GetBaseFilename(FullFilePath, false); //false = dont remove path
	FinalFilename += (SaveAsBMP) ? ".bmp" : ".png";  
   
	//~~~
	
	if(SaveAsBMP)
	{ 
		ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		return FFileHelper::CreateBitmap( 
			*FinalFilename, 
			Width, 
			Height,  
			ColorArray.GetData(), //const struct FColor* Data, 
			nullptr,//struct FIntRect* SubRectangle = NULL, 
			&IFileManager::Get(), 
			nullptr, //out filename info only 
			true //bool bInWriteAlpha 
		);
	}
	else
	{
		TArray<uint8,FDefaultAllocator64> CompressedPNG;
		FImageUtils::PNGCompressImageArray( 
			Width, 
			Height, 
			ColorArray, 
			CompressedPNG
		);
			
		ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		return FFileHelper::SaveArrayToFile(CompressedPNG, *FinalFilename);
	} 
}

bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor)
{
	if(!T2D || !T2D->GetPlatformData()) 
	{
		return false;
	}
	 
	if(X <= -1 || Y <= -1) 
	{
		return false;
	}
	
	
	//~~~
	if(T2D->CompressionSettings != TC_VectorDisplacementmap)
	{
		#if WITH_EDITOR
			FMessageLog("PIE").Error(FText::Format(LOCTEXT("Victory_GetPixelFromT2D", "UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D >> Texture Compression must be VectorDisplacementmap <3 Rama: {0}'"), FText::FromString(T2D->GetName())));
		#endif // WITH_EDITOR
		return false;
	}
	

	//~~~
	
	T2D->SRGB = false;
	
	T2D->CompressionSettings = TC_VectorDisplacementmap;
	
	//Update settings
	T2D->UpdateResource();
	 
	FTexture2DMipMap& MipsMap 	= T2D->GetPlatformData()->Mips[0];
	int32 TextureWidth = MipsMap.SizeX;
	int32 TextureHeight = MipsMap.SizeY;
	 
	//Safety check!
	if (X >= TextureWidth || Y >= TextureHeight)
	{
		#if WITH_EDITOR
			FMessageLog("PIE").Error(FText::Format(LOCTEXT("Victory_GetPixelFromT2D", "UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D >> X or Y is outside of texture bounds! <3 Rama: {0}'"), FText::FromString(FString::FromInt(TextureWidth) + " x " + FString::FromInt(TextureHeight) )));
		#endif // WITH_EDITOR
		return false;
	}
	
	FByteBulkData* RawImageData 	= &MipsMap.BulkData;
	
	if(!RawImageData) 
	{
		return false;
	}
	
	int32 TotalCount = RawImageData->GetElementCount();
	if(TotalCount < 1)
	{
		return false;
	}
	 
	uint8* RawByteArray = (uint8*)RawImageData->Lock(LOCK_READ_ONLY);
			
	//TC_VectorDisplacementmap	UMETA(DisplayName="VectorDisplacementmap (RGBA8)"),
	//! 4 because includes alpha <3 Rama
	/*
	for(int32 v = 0; v < TextureWidth * TextureHeight * RawImageData->GetElementSize() * 4; v++)
	{
		DebugString += FString::FromInt(RawByteArray[v]) + " ";
	}
	*/
 
	//Texture.cpp
	/*
	else if (FormatSettings.CompressionSettings == TC_VectorDisplacementmap)
	{
		TextureFormatName = NameBGRA8;
	}
	*/
	
	//Get!, converting FColor to FLinearColor 
	FColor ByteColor;
	ByteColor.B = RawByteArray[Y * TextureWidth * 4 + (X * 4) ];
	ByteColor.G = RawByteArray[Y * TextureWidth * 4 + (X * 4) + 1];
	ByteColor.R = RawByteArray[Y * TextureWidth * 4 + (X * 4) + 2];
	ByteColor.A = RawByteArray[Y * TextureWidth * 4 + (X * 4) + 3];
	
	//Set!
	PixelColor = ByteColor.ReinterpretAsLinear();
	
	RawImageData->Unlock();
	
	return true;
}


bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight,TArray<FLinearColor>& PixelArray)
{
	
	if(!T2D || !T2D->GetPlatformData()) 
	{
		return false;
	}
	
	if(T2D->CompressionSettings != TC_VectorDisplacementmap)
	{
		#if WITH_EDITOR
			FMessageLog("PIE").Error(FText::Format(LOCTEXT("Victory_GetPixelFromT2D", "UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D >> Texture Compression must be VectorDisplacementmap <3 Rama: {0}'"), FText::FromString(T2D->GetName())));
		#endif // WITH_EDITOR
		return false;
	}
	
	//To prevent overflow in BP if used in a loop
	PixelArray.Empty();
	
	T2D->SRGB = false;
	T2D->CompressionSettings = TC_VectorDisplacementmap;
	
	//Update settings
	T2D->UpdateResource();
	 
	FTexture2DMipMap& MyMipMap 	= T2D->GetPlatformData()->Mips[0];
	TextureWidth = MyMipMap.SizeX;
	TextureHeight = MyMipMap.SizeY;
	 
	FByteBulkData* RawImageData 	= &MyMipMap.BulkData;
	
	if(!RawImageData) 
	{
		return false;
	}
	
	uint8* RawByteArray = (uint8*)RawImageData->Lock(LOCK_READ_ONLY);
	
	
	for(int32 y = 0; y < TextureHeight; y++)   
	{
		for(int32 x = 0; x < TextureWidth; x++)
		{
			FColor ByteColor;
			ByteColor.B = RawByteArray[y * TextureWidth * 4 + (x * 4) ];
			ByteColor.G = RawByteArray[y * TextureWidth * 4 + (x * 4) + 1];
			ByteColor.R = RawByteArray[y * TextureWidth * 4 + (x * 4) + 2];
			ByteColor.A = RawByteArray[y * TextureWidth * 4 + (x * 4) + 3];
			
			PixelArray.Add(ByteColor.ReinterpretAsLinear());
		}
	}
	  
	RawImageData->Unlock();
	return true;
}

//~~~~~~~~~~~~~~~~
//  Viewport!
//~~~~~~~~~~~~~~~~

//Most HUD stuff is in floats so I do the conversion internally
bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY)
{
	if (!ThePC) return false;
	//~~~~~~~~~~~~~
	
	//Get Player
	const ULocalPlayer * VictoryPlayer = Cast<ULocalPlayer>(ThePC->Player); 
											//PlayerController::Player is UPlayer
           
	if (!VictoryPlayer) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	//get view port ptr
	const UGameViewportClient * VictoryViewportClient = 
		Cast < UGameViewportClient > (VictoryPlayer->ViewportClient);
		
	if (!VictoryViewportClient) return false;
	//~~~~~~~~~~~~~~~~~~~~
	 
	FViewport * VictoryViewport = VictoryViewportClient->Viewport;
	
	if (!VictoryViewport) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	//Set Mouse
	VictoryViewport->SetMouse(int32(PosX), int32(PosY));
	
	return true;
}

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(const APlayerController * ThePC, float & PosX, float & PosY)
{
	if (!ThePC) return false;
	//~~~~~~~~~~~~~
	
	//Get Player
	const ULocalPlayer * VictoryPlayer = Cast<ULocalPlayer>(ThePC->Player); 
											//PlayerController::Player is UPlayer
           
	if (!VictoryPlayer) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	//get view port ptr
	const UGameViewportClient * VictoryViewportClient = 
		Cast < UGameViewportClient > (VictoryPlayer->ViewportClient);
		
	if (!VictoryViewportClient) return false;
	//~~~~~~~~~~~~~~~~~~~~
	 
	FViewport * VictoryViewport = VictoryViewportClient->Viewport;
	
	if (!VictoryViewport) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	//Get Size
	FIntPoint Size = VictoryViewport->GetSizeXY();
	
	//Center
	PosX = Size.X / 2;
	PosY = Size.Y / 2;
	
	return true;
}

bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(const APlayerController * ThePC, float & PosX, float & PosY)
{
	if (!ThePC) return false;
	//~~~~~~~~~~~~~
	
	//Get Player
	const ULocalPlayer * VictoryPlayer = Cast<ULocalPlayer>(ThePC->Player); 
											//PlayerController::Player is UPlayer
           
	if (!VictoryPlayer) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	//get view port ptr
	const UGameViewportClient * VictoryViewportClient = 
		Cast < UGameViewportClient > (VictoryPlayer->ViewportClient);
		
	if (!VictoryViewportClient) return false;
	//~~~~~~~~~~~~~~~~~~~~
	 
	FViewport * VictoryViewport = VictoryViewportClient->Viewport;
	
	if (!VictoryViewport) return false;
	//~~~~~~~~~~~~~~~~~~~~
	
	PosX = float(VictoryViewport->GetMouseX());
	PosY = float(VictoryViewport->GetMouseY());
	
	return true;
}

//~~~~~~~~~~~~~~~~
//  World!
//~~~~~~~~~~~~~~~~
void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels)
{
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return;
	//~~~~~~~~~~~
	
	NamesOfLoadedLevels.Empty();
	
	//Get Level from Name!
	ULevel* FoundLevel = NULL;
	
	for(const ULevelStreaming* EachLevel : World->GetStreamingLevels())
	{
		if( ! EachLevel) continue;
		//~~~~~~~~~~~~~~~~
	
		ULevel* LevelPtr = EachLevel->GetLoadedLevel();
		
		//Valid?
		if(!LevelPtr) continue;
		
		//Is This Level Visible?
		if(!LevelPtr->bIsVisible) continue;
		//~~~~~~~~~~~~~~~~~~~
		 
		NamesOfLoadedLevels.Add(EachLevel->GetWorldAssetPackageFName().ToString());
	}
}

//~~~~~~~~~~~~~~~~
//  Strings!
//~~~~~~~~~~~~~~~~

bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(
	FString SaveDirectory, 
	FString JoyfulFileName, 
	FString SaveText,
	bool AllowOverWriting,
	bool AllowAppend
){
	if(!FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*SaveDirectory))
	{
		//Could not make the specified directory
		return false;
		//~~~~~~~~~~~~~~~~~~~~~~
	}
	
	//get complete file path
	SaveDirectory += "\\";
	SaveDirectory += JoyfulFileName;
	
	//No over-writing?
	if (!AllowOverWriting)
	{
		//Check if file exists already
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists( * SaveDirectory))
		{
			//no overwriting
			return false;
		}
	}
	
	if (AllowAppend)
	{
		SaveText += "\n";
		return FFileHelper::SaveStringToFile(SaveText, * SaveDirectory,
				FFileHelper::EEncodingOptions::AutoDetect,&IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	}
	return FFileHelper::SaveStringToFile(SaveText, * SaveDirectory);
}
bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend)  
{
	//Dir Exists?
	if ( !VCreateDirectory(SaveDirectory))
	{
		//Could not make the specified directory
		return false;
		//~~~~~~~~~~~~~~~~~~~~~~
	}
	
	//get complete file path
	SaveDirectory += "\\";
	SaveDirectory += JoyfulFileName;
	
	//No over-writing?
	if (!AllowOverWriting)
	{
		//Check if file exists already
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists( * SaveDirectory))
		{
			//no overwriting
			return false;
		}
	}
	 
	FString FinalStr = "";
	for(FString& Each : SaveText)
	{
		FinalStr += Each;
		FinalStr += LINE_TERMINATOR;
	}
	
	if (AllowAppend)
	{
	    FinalStr += "\n";
		return FFileHelper::SaveStringToFile(FinalStr, * SaveDirectory,
				FFileHelper::EEncodingOptions::AutoDetect,&IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	}

	return FFileHelper::SaveStringToFile(FinalStr, * SaveDirectory);
	
}


bool UVictoryBPFunctionLibrary::LoadStringFromFile(FString& Result, FString FullFilePath)
{
	return FFileHelper::LoadFileToString( Result, *FullFilePath);
}

bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath, bool ExcludeEmptyLines)
{
	ArraySize = 0;
	
	if(FullFilePath == "" || FullFilePath == " ") return false;
	
	//Empty any previous contents!
	StringArray.Empty();
	
	TArray<FString> FileArray;
	 
	if( ! FFileHelper::LoadANSITextFileToStrings(*FullFilePath, NULL, FileArray))
	{
		return false;
	}

	if(ExcludeEmptyLines)
	{
		for(const FString& Each : FileArray )
		{
			if(Each == "") continue;
			//~~~~~~~~~~~~~
			
			//check for any non whitespace
			bool FoundNonWhiteSpace = false;
			for(int32 v = 0; v < Each.Len(); v++)
			{
				if(Each[v] != ' ' && Each[v] != '\n')
				{
					FoundNonWhiteSpace = true;
					break;
				}
				//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			}
			
			if(FoundNonWhiteSpace)
			{
				StringArray.Add(Each);
			}
		}
	}
	else
	{
		StringArray.Append(FileArray);
	}
	
	ArraySize = StringArray.Num();
	return true; 
}

bool UVictoryBPFunctionLibrary::HasSubstring(const FString& SearchIn, const FString& Substring, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir)
{
	return SearchIn.Contains(Substring, SearchCase, SearchDir);
}

FString UVictoryBPFunctionLibrary::String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator, FString StringFirstLabel, FString StringSecondLabel)
{
	return StringFirstLabel + StringFirst + Separator + StringSecondLabel + StringSecond;
}
FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(FString A, FString B)
{  
	return A + " " + B;
}

//~~~~~~~~~~~~~~~~
//  Image Files!
//~~~~~~~~~~~~~~~~
	
static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString InImagePath)
{
	//EndsWith is not case sensitive by default, see unrealstring.h btw -Rama
	
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    if (InImagePath.EndsWith(".png"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
    }
    else if (InImagePath.EndsWith(".jpg") || InImagePath.EndsWith(".jpeg"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
    }
    else if (InImagePath.EndsWith(".bmp"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);
    }
    else if (InImagePath.EndsWith(".ico"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICO);
    }
    else if (InImagePath.EndsWith(".exr"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);
    }
    else if (InImagePath.EndsWith(".icns"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICNS);
    }
    
    return nullptr;
}

static UTexture2D* LoadTexture2D(const FString& FullFilePath, TSharedPtr<IImageWrapper> ImageWrapper, bool& IsValid, int32& Width, int32& Height)
{
	IsValid = false;
	UTexture2D* LoadedT2D = NULL;
	
	
	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) 
	{
		return NULL;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	  
	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{ 
		TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
			
			//Valid?
			if(!LoadedT2D || !LoadedT2D->GetPlatformData()) 
			{
				return NULL;
			}
			//~~~~~~~~~~~~~~
			
			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();
			 
			//Copy!
			void* TextureData = LoadedT2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
			LoadedT2D->GetPlatformData()->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}
	  
	// Success!
	IsValid = true;
	return LoadedT2D;
}

UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFileByExtension(const FString& FullFilePath,EJoyImageFormats ImageFormat,bool& IsValid, int32& Width, int32& Height)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));
	
	return LoadTexture2D(FullFilePath,ImageWrapper,IsValid,Width,Height);
}

UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const FString& FullFilePath,bool& IsValid, int32& Width, int32& Height)
{
	TSharedPtr<IImageWrapper> ImageWrapper = GetImageWrapperByExtention(FullFilePath);
	
	return LoadTexture2D(FullFilePath,ImageWrapper,IsValid,Width,Height);
}

bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation)
{
    if ((Target == nullptr) || (Target->TextureTarget == nullptr))
    {
        return false;
    }
    
    const FTransform& Transform = Target->GetComponentToWorld();
    FMatrix ViewMatrix = Transform.ToInverseMatrixWithScale();
    FVector ViewLocation = Transform.GetTranslation();

    // swap axis st. x=z,y=x,z=y (unreal coord space) so that z is up
    ViewMatrix = ViewMatrix * FMatrix(
        FPlane(0,    0,    1,    0),
        FPlane(1,    0,    0,    0),
        FPlane(0,    1,    0,    0),
        FPlane(0,    0,    0,    1));

    const float FOV = Target->FOVAngle * (float)PI / 360.0f;

    FIntPoint CaptureSize(Target->TextureTarget->GetSurfaceWidth(), Target->TextureTarget->GetSurfaceHeight());
    
    float XAxisMultiplier;
    float YAxisMultiplier;

    if (CaptureSize.X > CaptureSize.Y)
    {
        // if the viewport is wider than it is tall
        XAxisMultiplier = 1.0f;
        YAxisMultiplier = CaptureSize.X / (float)CaptureSize.Y;
    }
    else
    {
        // if the viewport is taller than it is wide
        XAxisMultiplier = CaptureSize.Y / (float)CaptureSize.X;
        YAxisMultiplier = 1.0f;
    }

    FMatrix    ProjectionMatrix = FReversedZPerspectiveMatrix (
        FOV,
        FOV,
        XAxisMultiplier,
        YAxisMultiplier,
        GNearClippingPlane,
        GNearClippingPlane
        );

    FMatrix ViewProjectionMatrix = ViewMatrix * ProjectionMatrix;

    FVector4 ScreenPoint = ViewProjectionMatrix.TransformFVector4(FVector4(Location,1));
    
    if (ScreenPoint.W > 0.0f)
    {
        float InvW = 1.0f / ScreenPoint.W;
        float Y = (GProjectionSignY > 0.0f) ? ScreenPoint.Y : 1.0f - ScreenPoint.Y;
        FIntRect ViewRect = FIntRect(0, 0, CaptureSize.X, CaptureSize.Y);
        OutPixelLocation = FVector2D(
            ViewRect.Min.X + (0.5f + ScreenPoint.X * 0.5f * InvW) * ViewRect.Width(),
            ViewRect.Min.Y + (0.5f - Y * 0.5f * InvW) * ViewRect.Height()
            );
        return true;
    }

    return false;
}    

bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation)
{
    return (Target) ? CaptureComponent2D_Project(Target->GetCaptureComponent2D(), Location, OutPixelLocation) : false;
}

bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const FString ImagePath, const FLinearColor ClearColour)
{ 
	// Bad scene capture component! No render target! Stay! Stay! Ok, feed!... wait, where was I?
	if ((Target == nullptr) || (Target->TextureTarget == nullptr))
	{
		#if WITH_EDITOR
			FMessageLog("PIE").Error(FText::Format(LOCTEXT("CaptureComponent2D_SaveImage", "UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage >> Please supply a Capture Component with a valid T2D Render Target :) <3 Rama {0}'"), FText::FromString(ImagePath)));
		#endif // WITH_EDITOR
		
		return false;
	}
	
	FRenderTarget* RenderTarget = Target->TextureTarget->GameThread_GetRenderTargetResource();
	if (RenderTarget == nullptr)
	{
		return false;
	}

	TArray<FColor> RawPixels;
	
	// Format not supported - use PF_B8G8R8A8.
	if (Target->TextureTarget->GetFormat() != PF_B8G8R8A8)
	{
		#if WITH_EDITOR
			FMessageLog("PIE").Error(FText::Format(LOCTEXT("CaptureComponent2D_SaveImage", "UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage >> The Texture Render Target (the texture render asset itself) format is not supported - use PF_B8G8R8A8 <3 Rama & Kris: {0}'"), FText::FromString(ImagePath)));
		#endif // WITH_EDITOR
		
		return false;
	}

	if (!RenderTarget->ReadPixels(RawPixels))
	{
		return false;
	}

	// Convert to FColor.
	FColor ClearFColour = ClearColour.ToFColor(false); // FIXME - want sRGB or not?

	for (auto& Pixel : RawPixels)
	{
		// Switch Red/Blue changes.
		const uint8 PR = Pixel.R;
		const uint8 PB = Pixel.B;
		Pixel.R = PB;
		Pixel.B = PR;

		// Set alpha based on RGB values of ClearColour.
		Pixel.A = ((Pixel.R == ClearFColour.R) && (Pixel.G == ClearFColour.G) && (Pixel.B == ClearFColour.B)) ? 0 : 255;
	}
	
	TSharedPtr<IImageWrapper> ImageWrapper = GetImageWrapperByExtention(ImagePath);

	const int32 Width = Target->TextureTarget->SizeX;
	const int32 Height = Target->TextureTarget->SizeY;
	
	if (ImageWrapper.IsValid() && ImageWrapper->SetRaw(&RawPixels[0], RawPixels.Num() * sizeof(FColor), Width, Height, ERGBFormat::RGBA, 8))
	{
		return FFileHelper::SaveArrayToFile(ImageWrapper->GetCompressed(), *ImagePath);
	}
	
	return false;
}

bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const FString ImagePath, const FLinearColor ClearColour)
{
	return (Target) ? CaptureComponent2D_SaveImage(Target->GetCaptureComponent2D(), ImagePath, ClearColour) : false;
}


//~~~~~~~~~~
// Core
//~~~~~~~~~~
void UVictoryBPFunctionLibrary::VictoryCreateProc(int32& ProcessId, FString FullPathOfProgramToRun,TArray<FString> CommandlineArgs,bool Detach,bool Hidden, int32 Priority, FString OptionalWorkingDirectory, URamaVictoryPluginCreateProcessPipe* ReadPipeObject)
{   
	//Please note ProcessId should really be uint32 but that is not supported by BP yet

	if(ReadPipeObject)
	{
		ReadPipeObject->CreatePipe();
	}
	
	FString Args = "";
	if(CommandlineArgs.Num() > 1)
	{
		Args = CommandlineArgs[0]; 
		for(int32 v = 1; v < CommandlineArgs.Num(); v++)
		{
			Args += " " + CommandlineArgs[v];
		}
	}
	else if(CommandlineArgs.Num() > 0)
	{
		Args = CommandlineArgs[0];
	}
	 
	uint32 NeedBPUINT32 = 0;
	FProcHandle ProcHandle = FPlatformProcess::CreateProc( 
		*FullPathOfProgramToRun, 
		*Args, 
		Detach,//* @param bLaunchDetached		if true, the new process will have its own window
		false,//* @param bLaunchHidded			if true, the new process will be minimized in the task bar
		Hidden,//* @param bLaunchReallyHidden	if true, the new process will not have a window or be in the task bar
		&NeedBPUINT32, 
		Priority, 
		(OptionalWorkingDirectory != "") ? *OptionalWorkingDirectory : nullptr,//const TCHAR* OptionalWorkingDirectory, 
		(ReadPipeObject && ReadPipeObject->PipeIsValid()) ? ReadPipeObject->WritePipe : nullptr
	);
	 
	//Not sure what to do to expose UINT32 to BP
	ProcessId = NeedBPUINT32; 
}
//~~~~~~~~~~
// Misc
//~~~~~~~~~~

static int32 GetChildBones(const FReferenceSkeleton& ReferenceSkeleton, int32 ParentBoneIndex, TArray<int32> & Children)
{ 
	Children.Empty();

	const int32 NumBones = ReferenceSkeleton.GetNum();
	for(int32 ChildIndex=ParentBoneIndex+1; ChildIndex<NumBones; ChildIndex++)
	{
		if ( ParentBoneIndex == ReferenceSkeleton.GetParentIndex(ChildIndex) )
		{
			Children.Add(ChildIndex);
		}
	}

	return Children.Num();
}

static void GetChildBoneNames_Recursive(USkeletalMeshComponent* SkeletalMeshComp, int32 ParentBoneIndex, TArray<FName>& ChildBoneNames)
{	
	TArray<int32> BoneIndicies;  
	GetChildBones(SkeletalMeshComp->GetSkeletalMeshAsset()->GetRefSkeleton(), ParentBoneIndex, BoneIndicies);
	   
	if(BoneIndicies.Num() < 1)
	{
		//Stops the recursive skeleton search
		return;
	}
	 
	for(const int32& BoneIndex : BoneIndicies)
	{
		FName ChildBoneName = SkeletalMeshComp->GetBoneName(BoneIndex);
		ChildBoneNames.Add(ChildBoneName);
		 
		//Recursion
		GetChildBoneNames_Recursive(SkeletalMeshComp, BoneIndex,ChildBoneNames);
	}
}


bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(UObject* WorldContextObject)
{
	if(!WorldContextObject) return false;
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return false;
	//~~~~~~~~~~~
	
    return (World->WorldType == EWorldType::Editor );
}

bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(UObject* WorldContextObject)
{
	if(!WorldContextObject) return false;
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return false;
	//~~~~~~~~~~~
	
    return (World->WorldType == EWorldType::PIE );
}
bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(UObject* WorldContextObject)
{
	if(!WorldContextObject) return false;
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return false;
	//~~~~~~~~~~~
	
    return (World->WorldType == EWorldType::Game );
}

void UVictoryBPFunctionLibrary::ServerTravel(UObject* WorldContextObject, FString MapName,bool bSkipNotifyPlayers)
{ 
	if(!WorldContextObject) return;
	 
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return;
	//~~~~~~~~~~~
	 
	World->ServerTravel(MapName,false,bSkipNotifyPlayers); //abs //notify players
}

int32 UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone( USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName,  TArray<FName>& BoneNames )
{
	BoneNames.Empty();
	
	if(!SkeletalMeshComp || !SkeletalMeshComp->GetSkeletalMeshAsset())
	{
		return -1;
		//~~~~
	}
	 
	int32 StartingBoneIndex = SkeletalMeshComp->GetBoneIndex(StartingBoneName);
	 
	//Recursive
	GetChildBoneNames_Recursive(SkeletalMeshComp, StartingBoneIndex, BoneNames);
	     
	return BoneNames.Num();
}

//~~~ Key To Truth ~~~
//.cpp
//Append different text strings with optional pins.
FString UVictoryBPFunctionLibrary::AppendMultiple(FString A, FString B)
{  
    FString Result = "";

	Result += A;
    Result += B;
	 
    return Result;
}


bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection)
{
	bool bResult = false;

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull))
	{
		bResult = UGameplayStatics::DeprojectScreenToWorld(World->GetFirstPlayerController(), ViewportPosition, OutWorldOrigin, OutWorldDirection);
	}

	return bResult;
}


bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw)
{
	//Get Owning Character
	ACharacter * TheCharacter = Cast<ACharacter>(AnimBPOwner);
	
	if (!TheCharacter) return false;
	//~~~~~~~~~~~~~~~
	
	//Get Owning Controller Rotation
	const FRotator TheCtrlRotation = TheCharacter->GetControlRotation();
	
	const FVector RotationDir = TheCtrlRotation.Vector();
	
	//Inverse of ActorToWorld matrix is Actor to Local Space
		//so this takes the direction vector, the PC or AI rotation
		//and outputs what this dir is 
		//in local actor space &
		
		//local actor space is what we want for aiming offsets
		
	const FVector LocalDir = TheCharacter->ActorToWorld().InverseTransformVectorNoScale(RotationDir);
	const FRotator LocalRotation = LocalDir.Rotation();
		
	//Pass out Yaw and Pitch
	Yaw = LocalRotation.Yaw;
	Pitch = LocalRotation.Pitch;
	
	return true;
}
bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(AActor * AnimBPOwner, const FRotator & TheRotation, float & Pitch, float & Yaw)
{
	//Get Owning Character
	ACharacter * TheCharacter = Cast<ACharacter>(AnimBPOwner);
	
	if (!TheCharacter) return false;
	//~~~~~~~~~~~~~~~
	
	//using supplied rotation
	const FVector RotationDir = TheRotation.Vector();
	
	//Inverse of ActorToWorld matrix is Actor to Local Space
		//so this takes the direction vector, the PC or AI rotation
		//and outputs what this dir is 
		//in local actor space &
		
		//local actor space is what we want for aiming offsets
		
	const FVector LocalDir = TheCharacter->ActorToWorld().InverseTransformVectorNoScale(RotationDir);
	const FRotator LocalRotation = LocalDir.Rotation();
		
	//Pass out Yaw and Pitch
	Yaw = LocalRotation.Yaw;
	Pitch = LocalRotation.Pitch;
	
	return true;
}

APlayerController * UVictoryBPFunctionLibrary::Accessor__GetPlayerController(
	AActor * TheCharacter, 
	bool & IsValid
)
{
	IsValid = false;
	
	//Cast to Character
	ACharacter * AsCharacter = Cast<ACharacter>(TheCharacter);
	if (!AsCharacter) return NULL;
	
	//cast to PC
	APlayerController * ThePC = Cast < APlayerController > (AsCharacter->GetController());
	
	if (!ThePC ) return NULL;
	
	IsValid = true;
	return ThePC;
}
	
//~~~~~~~~~~
// File IO
//~~~~~~~~~~

bool UVictoryBPFunctionLibrary::GenerateUniqueContentRelativeFileName(FString ContentRelativeFilePath, FString& ContentRelativeNewFileName, FString& AbsolutePath, bool CreateFolderTree)
{
	//UE User-Input Assistance (inline) ♥ Rama
	FPaths::NormalizeFilename(ContentRelativeFilePath);
	FPaths::RemoveDuplicateSlashes(ContentRelativeFilePath);
	
	FString AbsContentPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir());
	
	//Extension
	FString FileExt		=  FPaths::GetExtension(ContentRelativeFilePath, true); //include .
	
	//File without any extension
	FString AssetFile 	= FPaths::GetBaseFilename(ContentRelativeFilePath);
	
	//Everything but the file
	FString BasePath 	= FPaths::GetPath(ContentRelativeFilePath);
	
	
	if(ContentRelativeFilePath.Contains("/"))
	{	
		//Absolute Path
		BasePath = AbsContentPath + BasePath; 
		 
		if(CreateFolderTree)
		{
			//Folder?
			if(!FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*BasePath))
			{ 
				//Info out to user about what was attempted
				AbsolutePath = BasePath;
				return false;
				//~~~~~~~~~~~~~~~~~~~~~~
			}
		}
	}
	
	//~~~
	// Make path with extension
	if(BasePath != "")
	{
		AbsolutePath = BasePath + "/" + AssetFile;
	}
	else
	{
		AbsolutePath = AbsContentPath + AssetFile;
	}
	 
	//Check if file exists already, increment int as needed, ♥ Rama
	 
	//Absolute Path + File, Still No Extension yet
	BasePath 		= AbsolutePath;
	  
	int32 FileNameInt 	= 1;
	AbsolutePath 		= BasePath + FileExt;
	while(FPlatformFileManager::Get().GetPlatformFile().FileExists( *AbsolutePath))
	{
		FileNameInt++;
		AbsolutePath = BasePath + FString::FromInt(FileNameInt) + FileExt;
	}
	
	FString Left;
	
	//Make Relative
	AbsolutePath.Split(TEXT("/Content/"),&Left,&ContentRelativeNewFileName);
	
	return true;
}

FDateTime UVictoryBPFunctionLibrary::Victory_GetFileTimeStamp(const FString& File)
{
	return FPlatformFileManager::Get().GetPlatformFile().GetTimeStamp(*File);
}
void UVictoryBPFunctionLibrary::Victory_SetTimeStamp(const FString& File, const FDateTime& TimeStamp)
{
	FPlatformFileManager::Get().GetPlatformFile().SetTimeStamp(*File,TimeStamp);
}	

bool UVictoryBPFunctionLibrary::Victory_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext)
{
	if(RootFolderFullPath.Len() < 1) return false;
	
	FPaths::NormalizeDirectoryName(RootFolderFullPath);
	
	IFileManager& FileManager = IFileManager::Get();
	 
	if(!Ext.Contains(TEXT("*")))
	{
		if(Ext == "") 
		{
			Ext = "*.*";
		}
		else
		{
			Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;
		}
	}
	
	FString FinalPath = RootFolderFullPath + "/" + Ext;
	
	FileManager.FindFiles(Files, *FinalPath, true, false);
	return true;				  
}
bool UVictoryBPFunctionLibrary::Victory_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext)
{
	if(RootFolderFullPath.Len() < 1) return false;
	
	FPaths::NormalizeDirectoryName(RootFolderFullPath);
	
	IFileManager& FileManager = IFileManager::Get();
	 
	if(!Ext.Contains(TEXT("*")))
	{
		if(Ext == "") 
		{
			Ext = "*.*";
		}
		else
		{
			Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;
		}
	}
	
	FileManager.FindFilesRecursive(Files, *RootFolderFullPath, *Ext, true, false);
	return true;
}

//~~~~~~~~~~
//    OS
//~~~~~~~~~~

bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const FString& String)
{
	std::string str = (TCHAR_TO_UTF8(*String));
	    
	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if(!isalnum(*it))
		{   
			return false;
		}
	}
	
	return true;
}

void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(FString& FromClipboard)
{  
	FPlatformApplicationMisc::ClipboardPaste(FromClipboard);
} 
void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const FString& ToClipboard)
{
	FPlatformApplicationMisc::ClipboardCopy(*ToClipboard);
}

bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
{   
	return FPlatformApplicationMisc::IsThisApplicationForeground();
}

AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(
	UObject* WorldContextObject, 
	TSubclassOf<AActor> ActorClass, 
	FVector Center, 
	float Radius, 
	bool& IsValid
){ 
	IsValid = false;
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return NULL;
	//~~~~~~~~~~~
	
	AActor* ClosestActor 		= NULL;
	float MinDistanceSq 		= Radius*Radius;	//Max Radius
	
	for (TActorIterator<AActor> Itr(World, ActorClass); Itr; ++Itr)
	{
		const float DistanceSquared = FVector::DistSquared(Center, Itr->GetActorLocation());

		//Is this the closest possible actor within the max radius?
		if (DistanceSquared < MinDistanceSq)
		{
			ClosestActor = *Itr;					//New Output!
			MinDistanceSq = DistanceSquared;		//New Min!
		}
	}

	if (ClosestActor)
	{
		IsValid = true;
	}

	return ClosestActor;
} 

AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(
	UObject* WorldContextObject, 
	TSubclassOf<AActor> ActorClass, 
	AActor* ActorCenter, 
	float Radius, 
	bool& IsValid
){ 
	IsValid = false;
	  
	if(!ActorCenter)
	{
		return nullptr;
	}
	
	const FVector Center = ActorCenter->GetActorLocation();
	
	//using a context object to get the world!
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	if(!World) return NULL;
	//~~~~~~~~~~~
	
	AActor* ClosestActor 		= NULL;
	float MinDistanceSq 		= Radius*Radius;	//Max Radius
	
	for (TActorIterator<AActor> Itr(World, ActorClass); Itr; ++Itr)
	{
		//Skip ActorCenter!
		if(*Itr == ActorCenter) continue;
		//~~~~~~~~~~~~~~~~~
		
		const float DistanceSquared = FVector::DistSquared(Center, Itr->GetActorLocation());

		//Is this the closest possible actor within the max radius?
		if (DistanceSquared < MinDistanceSq)
		{
			ClosestActor = *Itr;					//New Output!
			MinDistanceSq = DistanceSquared;		//New Min!
		}
	}

	if (ClosestActor)
	{
		IsValid = true;
	}

	return ClosestActor;
}




bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return false;
	//~~~~~~~~~~~
 
	bool Value;
	IsValid = GConfig->GetBool(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
} 
int32 UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return 0;
	//~~~~~~~~~~~
 
	int32 Value;
	IsValid = GConfig->GetInt(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
}
float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return 0;
	//~~~~~~~~~~~
 
	float Value;
	IsValid = GConfig->GetFloat(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
}
FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return FVector::ZeroVector;
	//~~~~~~~~~~~
 
	FVector Value;
	IsValid = GConfig->GetVector(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
}
FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return FRotator::ZeroRotator;
	//~~~~~~~~~~~
 
	FRotator Value;
	IsValid = GConfig->GetRotator(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
}
FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return FColor::Black;
	//~~~~~~~~~~~
  
	FColor Value;
	IsValid = GConfig->GetColor(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return FLinearColor(Value);
}
FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(FString SectionName,FString VariableName, bool& IsValid)
{
	if(!GConfig) return "";
	//~~~~~~~~~~~
 
	FString Value;
	IsValid = GConfig->GetString(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return Value;
}

FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid)
{
	if(!GConfig) return FVector2D::ZeroVector;
	//~~~~~~~~~~~
 
	FVector Value;
	IsValid = GConfig->GetVector(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
	return FVector2D(Value.X,Value.Y);
} 
  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
	
	GConfig->SetVector(
		*SectionName,
		*VariableName,
		FVector(Value.X,Value.Y,0),
		GGameIni
	);
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(FString SectionName,FString VariableName, bool Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
 
	GConfig->SetBool(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(FString SectionName,FString VariableName, int32 Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
 
	GConfig->SetInt(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(FString SectionName,FString VariableName, float Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
	
	GConfig->SetFloat(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(FString SectionName,FString VariableName, FVector Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
	
	GConfig->SetVector(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(FString SectionName,FString VariableName, FRotator Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
	
	GConfig->SetRotator(
		*SectionName,
		*VariableName,
		Value,
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(FString SectionName,FString VariableName, FLinearColor Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
	 
	GConfig->SetColor(
		*SectionName,
		*VariableName,
		Value.ToFColor(true),
		GGameIni
	);
}
void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(FString SectionName,FString VariableName, FString Value)
{
	if(!GConfig) return;
	//~~~~~~~~~~~
 
	GConfig->SetString(
		*SectionName,
		*VariableName,
		*Value,
		GGameIni
	);
}

bool UVictoryBPFunctionLibrary::ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector linePoint1, FVector lineVec1, FVector linePoint2, FVector lineVec2)
{
	float a = FVector::DotProduct(lineVec1, lineVec1);
	float b = FVector::DotProduct(lineVec1, lineVec2);
	float e = FVector::DotProduct(lineVec2, lineVec2);

	float d = a*e - b*b;

	//lines are not parallel
	if (d != 0.0f)
	{
		FVector r = linePoint1 - linePoint2;
		float c = FVector::DotProduct(lineVec1, r);
		float f = FVector::DotProduct(lineVec2, r);

		float s = (b*f - c*e) / d;
		float t = (a*f - c*b) / d;

		closestPointLine1 = linePoint1 + lineVec1 * s;
		closestPointLine2 = linePoint2 + lineVec2 * t;

		return true;
	}
	else
	{
		return false;
	}
}

//see: #define LOCTEXT_NAMESPACE "VictoryBPLibrary"
#undef LOCTEXT_NAMESPACE