// Copyright Rama All Rights Reserved.

#pragma once

//Kinda Important (used once in a while)
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"

//UMG
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VictoryBPFunctionLibrary.generated.h"

/** 
	Made With Love By Rama for Use with @VictoryCreateProc
	So that you can receive feedback from your processes.
	
	♥
	
	Rama
*/
UCLASS(Blueprintable,BlueprintType)
class URamaVictoryPluginCreateProcessPipe : public UObject
{
	GENERATED_BODY()
public:
	 
	UFUNCTION(BlueprintCallable, Category = "Joy Flow")
	bool CreatePipe();
	
	UFUNCTION(BlueprintCallable, Category = "Joy Flow")
	void ClosePipe();
	
	/** 
		This has exec pins because it is an expensive action and the output is saved/cached on the output pin, whereas a Pure node would repeat the action many times, each time node is accessed.
		
		@Return false if the pipes were not created yet
		
		♥ Rama 
	*/
	UFUNCTION(BlueprintCallable, Category = "Joy Flow")
	bool ReadFromPipe(FString& PipeContents);
	
	UFUNCTION(BlueprintPure, Category = "Joy Flow")
	bool PipeIsValid();
	
public:
	void* ReadPipe = nullptr;
	void* WritePipe = nullptr;
	
	virtual void BeginDestroy() override;
};

UENUM(BlueprintType)
enum EJoyImageFormats
{
	/**
	 * Example of a comment inside a custom enum <3 Rama
	 * @see FWalkableSlopeOverride::WalkableSlopeAngle
	 */
	JPG		UMETA(DisplayName="JPG        "),
	
	PNG		UMETA(DisplayName="PNG        "),
	BMP		UMETA(DisplayName="BMP        "),
	ICO		UMETA(DisplayName="ICO        "),
	EXR		UMETA(DisplayName="EXR        "),
	ICNS	UMETA(DisplayName="ICNS        "),
	
	JoyImageFormats_Max		UMETA(Hidden),
};

/*
	Victory to You! <3 Rama
*/
UCLASS()
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	//~~~~~~~~~~~~~~
	// 	Joy Geo
	//~~~~~~~~~~~~~~
	//~~~
	/** Yes!!! For Real!!! 
			♥ Rama
		PS: If you find the new asset has a pivot point far from itself, I recommend moving the mesh to world origin (0,0,0) in level viewport before saving 
		
		PSS: Only works in Editor Builds by the way, see UE5 C++ Source file: 
			UE_5.0\Engine\Plugins\Runtime\MeshModelingToolset\Source\ModelingComponentsEditorOnly\PublicEditorModelingObjectsCreationAPI.h 
				for more info! 
			
		@param ContentFolderPath If this is just a name (there is no need to add a ".uasset" file extension to the name), the Static Mesh Asset will be created in your game's Content root directory (folder)! If the path is YourFolder/YourAssetName, then the asset will be created in your chosen folder (within Content Folder), I create the folder if necessary, using GenericPlatformFile::CreateDirectoryTree, my very first UE Engine Github C++ code gifts! ♥ Rama
		@param Status more info about reason for operation not succeeding, or a special Success Message!
	*/
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	static UStaticMesh* CreateStaticMeshAssetFromDynamicMesh(FString ContentFolderPath, UDynamicMeshComponent* DynamicMeshComp, FString& Status, FString& NewAssetFilePath, bool& Success);
	
	/** Obtain the scaled,rotated, and translated vertex positions for any static mesh! Returns false if operation could not occur because the comp or static mesh asset was invalid. <3 Rama */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Actor")
	static bool GetStaticMeshVertexLocations(UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions, int32 LodIndex = 0);
	
	//~~~~~~~~~~~~~~~~~~~
	// 	  Load Object
	//~~~~~~~~~~~~~~~~~~~
	
	/** The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Misc", Meta = (DeterminesOutputType = "ObjectClass"))
	static UObject* LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid);

	/** Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Misc")
	static FName GetObjectPath(UObject* Obj);
	
	//~~~~~~~~~~~~
	// 	  Math
	//~~~~~~~~~~~~
	
	/** Easily add to an integer! <3 Rama*/
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "+=",Keywords = "increment integer"), Category = "Victory BP Library|Math|Integer")
	static void VictoryIntPlusEquals(UPARAM(ref) int32& Int, int32 Add, int32& IntOut);

	/** Easily subtract from an integer! <3 Rama*/
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "-=",Keywords = "decrement integer"), Category = "Victory BP Library|Math|Integer")
	static void VictoryIntMinusEquals(UPARAM(ref) int32& Int, int32 Sub, int32& IntOut);

	/** Easily add to a float! <3 Rama*/
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "+=",Keywords = "increment float"), Category = "Victory BP Library|Math|Float")
	static void VictoryFloatPlusEquals(UPARAM(ref) float& Float, float Add, float& FloatOut);

	/** Easily subtract from a float! <3 Rama*/
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "-=",Keywords = "decrement float"), Category = "Victory BP Library|Math|Float")
	static void VictoryFloatMinusEquals(UPARAM(ref) float& Float, float Sub, float& FloatOut);
	
	/** Sort an integer array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. <3 Rama */
	UFUNCTION(BlueprintCallable, meta = (Keywords = "sort integer array"), Category = "Victory BP Library|Array")
	static void VictorySortIntArray(UPARAM(ref) TArray<int32>& IntArray, TArray<int32>& IntArrayRef)
	{
		IntArray.Sort();
		IntArrayRef = IntArray;
	}

	/** Sort a float array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. */
	UFUNCTION(BlueprintCallable, meta = (Keywords = "sort float array"), Category = "Victory BP Library|Array")
	static void VictorySortFloatArray(UPARAM(ref) TArray<float>& FloatArray, TArray<float>& FloatArrayRef)
	{
		FloatArray.Sort();
		FloatArrayRef = FloatArray;
	}
	 
	/** Sort a string array alphabetically! */
	UFUNCTION(BlueprintCallable, meta = (Keywords = "sort string array"), Category = "Victory BP Library|Array")
	static void VictorySortStringArray(UPARAM(ref) TArray<FString>& StringArray, TArray<FString>& StringArrayRef)
	{
		StringArray.Sort();
		StringArrayRef = StringArray;
	}
	
	//~~~~~~~~~~~~
	// 	  UMG
	//~~~~~~~~~~~~
	/**
	 * Find first widget of a certain class and return it.
	 * @param WidgetClass The widget class to filter by.
	 * @param TopLevelOnly Only a widget that is a direct child of the viewport will be returned.
	 */
	UFUNCTION(Category = "Victory BP Library|UMG", BlueprintCallable, BlueprintCosmetic, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "WidgetClass"))
	static UUserWidget* GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
	
	UFUNCTION(Category = "Victory BP Library|UMG", BlueprintCallable, BlueprintCosmetic, Meta = (DefaultToSelf = "ParentWidget", DeterminesOutputType = "WidgetClass", DynamicOutputParam = "ChildWidgets"))
	static void WidgetGetChildrenOfClass(UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<UUserWidget> WidgetClass, bool bImmediateOnly);
	 
	/**
	 * Recurses up the list of parents until it finds a widget of WidgetClass.
	 * @return widget that is Parent of ChildWidget that matches WidgetClass.
	 */
	UFUNCTION(Category = "Victory BP Library|UMG", BlueprintCallable, BlueprintCosmetic, Meta = (DefaultToSelf = "ChildWidget", DeterminesOutputType = "WidgetClass"))
	static UUserWidget* WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass);
	
	UFUNCTION(Category = "Victory BP Library|UMG", BlueprintCallable, BlueprintCosmetic, Meta = (DefaultToSelf = "ParentUserWidget"))
	static UWidget* GetWidgetFromName(UUserWidget* ParentUserWidget, const FName& Name);
	
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|UMG", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
	
	/** Remove all widgets of a certain class from viewport! */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|UMG", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static void RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Input")
	static void VictorySimulateMouseWheel(const float& Delta);

	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Input")
	static void VictorySimulateKeyPress(APlayerController* ThePC, FKey Key, EInputEvent EventType);
	
	//~~~~~~~~~~~~~~~~
	//  Image Files!
	//~~~~~~~~~~~~~~~~
	
	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="image png jpg jpeg bmp bitmap ico icon exr icns"))
	static UTexture2D* Victory_LoadTexture2D_FromFileByExtension(const FString& FullFilePath,EJoyImageFormats ImageFormat,bool& IsValid, int32& Width, int32& Height);
	
	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. The image type is assumed from an extension such as .jpg, .png, .bmp. Enjoy! -Rama */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="image png jpg jpeg bmp bitmap ico icon exr icns"))
	static UTexture2D* Victory_LoadTexture2D_FromFile(const FString& FullFilePath,bool& IsValid, int32& Width, int32& Height);
	
	//~~~~~~~~~~~~
	// Capture 2D
	//~~~~~~~~~~~~
	
	/** Contributed by Community Member Kris! */
	UFUNCTION(Category = "Victory BP Library|SceneCapture", BlueprintPure)
	static bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);

	/** Contributed by Community Member Kris! */
	UFUNCTION(Category = "Victory BP Library|SceneCapture", BlueprintPure, Meta = (DefaultToSelf = "Target"))
	static bool Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);

	/** 
		I highly recommend that your Texture Render Target Format be "RTF RGB8 SRGB" both so it is compatible, and so it looks the same as in-game 
			<3 Rama. 
			
		Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! 
	*/
	UFUNCTION(Category = "Victory BP Library|SceneCapture", BlueprintCallable)
	static bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const FString ImagePath, const FLinearColor ClearColour);

	/** 
		I highly recommend that your Texture Render Target Format be "RTF RGB8 SRGB" both so it is compatible, and so it looks the same as in-game 
			<3 Rama. 
			
		Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! 
	*/
	UFUNCTION(Category = "Victory BP Library|SceneCapture", BlueprintCallable, Meta = (DefaultToSelf = "Target"))
	static bool Capture2D_SaveImage(class ASceneCapture2D* Target, const FString ImagePath, const FLinearColor ClearColour);
	
	//~~~~~~~~~~~~
	// 	  Misc
	//~~~~~~~~~~~~
	
	/** Is this game logic running in the Editor world? */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Victory BP Library|System", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static bool WorldType__InEditorWorld(UObject* WorldContextObject);

	/** Is this game logic running in the PIE world? */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Victory BP Library|System", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static bool WorldType__InPIEWorld(UObject* WorldContextObject);

	/** Is this game logic running in an actual independent game instance? */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Victory BP Library|System", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static bool WorldType__InGameInstanceWorld(UObject* WorldContextObject);
		
	/** Server Travel! This is an async load level process which allows you to put up a UMG widget while the level loading occurs! */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|System",meta=(WorldContext="WorldContextObject"))
	static void ServerTravel(UObject* WorldContextObject,FString MapName, bool bSkipNotifyPlayers=false);
	
	/**
	 * Get All Bone Names Below Bone, requires a physics asset, by Rama
	 *
	 * @param StartingBoneName The name of the bone to find all bones below.
	 *
	 * @param BoneNames , all of the bone names below the starting bone.
	 *
	 * @return total number of bones found
	 */
	UFUNCTION(BlueprintCallable, Category="Victory BP Library|Components|SkinnedMesh")
	static int32 GetAllBoneNamesBelowBone(USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName,  TArray<FName>& BoneNames );
	
	/* Addition of strings (A + B) with pins. Contributed by KeyToTruth */
	//UFUNCTION(BlueprintPure, meta = (DisplayName = "Append Multiple", Keywords = "concatenate combine append strings", CommutativeAssociativeBinaryOperator = "true"), Category = "Victory BP Library|String")
	static FString AppendMultiple(FString A, FString B);

	/**
	 * Transforms the viewport position into a world space origin and direction.
	 *
	 * @param WorldContextObject	World context.
	 * @param ViewportPosition		Local space of viewport from GetViewportPosition() or similar.
	 * @param OutWorldOrigin		Corresponding 3D location in world space.
	 * @param OutWorldDirection		World space direction vector away from the camera at the given 2d point.
	 *
	 * @return false if something went wrong during the deproject process.
	 */
	UFUNCTION(Category = "Victory BP Library|Game|Viewport", BlueprintCallable, Meta = (WorldContext="WorldContextObject"))
	static bool ViewportPositionDeproject(UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection);
	
	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw Based On the Rotation of the Controller of The Character Owning The Anim Instance.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n   Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Aim Offset")
	static bool Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw);

	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw for the AnimBPOwner Based On the supplied Rotation.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n    Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Aim Offset")
	static bool Animation__GetAimOffsetsFromRotation(AActor * AnimBPOwner, const FRotator & TheRotation, float & Pitch, float & Yaw);
	
	/** Get Player Character's Player Controller. Requires: The Passed in Actor must be a character and it must be a player controlled character. IsValid will tell you if the return value is valid, make sure to do a Branch to confirm this! */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Character")
	static APlayerController* Accessor__GetPlayerController(AActor* TheCharacter, bool&IsValid);
	
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Conversion", meta=(AdvancedDisplay = "1"))
	static float Text_ToFloat(const FText& Text, bool UseDotForThousands=false)
	{
		//because commas lead to string number being truncated, FText 10,000 becomes 10 for FString
		FString StrFloat = Text.ToString();
		TextNumFormat(StrFloat,UseDotForThousands);
		return FCString::Atof(*StrFloat);
	}

	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Conversion", meta=(AdvancedDisplay = "1"))
	static int32 Text_ToInt(const FText& Text, bool UseDotForThousands=false)
	{
		//because commas lead to string number being truncated, FText 10,000 becomes 10 for FString
		FString StrInt = Text.ToString();
		TextNumFormat(StrInt,UseDotForThousands);
		return FCString::Atoi(*StrInt);
	}

	static void TextNumFormat(FString& StrNum, bool UseDotForThousands)
	{
		//10.000.000,997
		if(UseDotForThousands)
		{
			StrNum.ReplaceInline(TEXT("."),TEXT(""));	//no dots as they truncate
			StrNum.ReplaceInline(TEXT(","),TEXT("."));	//commas become decimal
		}

		//10,000,000.997
		else
		{
			StrNum.ReplaceInline(TEXT(","),TEXT(""));  //decimal can stay, commas would truncate so remove
		}
	}
	
	//~~~~~~~~~~~~
	// 	File I/O
	//~~~~~~~~~~~~

	/** 
		@CreateFolderTree I make sure the path you have supplied, relative to Project Content Folder, is created if you set this to true! ♥ Rama 
		@return false if Folder Tree could not be created, see "AbsolutePath" to see what folder tree structure was attempted.
		Creates an unused filename, Given a basefile name that is relative to Content Folder of Project (So if you supply "YourFolder/BaseFile.EXT", this file would be actually be located in YourProjectFolder/Content/YourFolder/BaseFile.EXT), adding a number BaseFile1, BaseFile2, BaseFile3, as needed until a unique filename is generated! 
	*/
	UFUNCTION(BlueprintCallable,Category="Victory BP Library|File IO")
	static bool GenerateUniqueContentRelativeFileName(FString ContentRelativeFilePath, FString& ContentRelativeNewFileName, FString& AbsolutePath, bool CreateFolderTree = true);
	
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|File IO")
	static FDateTime Victory_GetFileTimeStamp(const FString& File);
	
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|File IO")
	static void Victory_SetTimeStamp(const FString& File, const FDateTime& TimeStamp);

	/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|File IO")
	static bool Victory_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);

	/** Obtain all files in a provided root directory, including all subdirectories, with optional extension filter. All files are returned if Ext is left blank. The full file path is returned because the file could be in any subdirectory. Returns false if operation could not occur. */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|File IO")
	static bool Victory_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
	
	//~~~~~~~~~~
	// 	Core
	//~~~~~~~~~~

	/**
		Launch a new process, if it is not set to be detached, UE4 will not fully close until the other process completes.

		The new process id is returned!

		@param Detach Ensure completion before UE4 closes or not? Detach = UE4 can close and process will keep going / possibly never stop running as there is no one left to stop the process now ♥ Rama
		
		@param Priority Priority options: -2 idle, -1 low, 0 normal, 1 high, 2 higher

		@param ReadPipeObject Construct a new object of class URamaVictoryPluginCreateProcessPipe if you want to capture the output (STDOUT or STDERR) of this process! ♥♥♥ Yes ♥♥♥ !!!! (call ReadFromPipe on the object over time, in a timer, after creating the procedure, remember to nullptr Your Object Reference after closing the pipe, so that UE4 will garbage-collect the object! )
		
		♥ Rama
	*/
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|System")
	static void VictoryCreateProc(int32& ProcessId, FString FullPathOfProgramToRun,TArray<FString> CommandlineArgs,bool Detach,bool Hidden, int32 Priority=0, FString OptionalWorkingDirectory="", URamaVictoryPluginCreateProcessPipe* ReadPipeObject=nullptr);

	/** You can obtain ProcessID from processes you initiate via VictoryCreateProc */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|System")
	static FString VictoryGetApplicationName(int32 ProcessId)
	{
		//Please note it should really be uint32 but that is not supported by BP yet
		return FPlatformProcess::GetApplicationName(ProcessId);
	}

	/** You can obtain ProcessID from processes you initiate via VictoryCreateProc */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|System")
	static bool VictoryIsApplicationRunning( int32 ProcessId )
	{
		//Please note it should really be uint32 but that is not supported by BP yet
		return FPlatformProcess::IsApplicationRunning(ProcessId);
	}
	/* Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama*/
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|System")
	static int64 GetUnixTimeStamp(const FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that is not supported by BP yet
		return UTCTime.ToUnixTimestamp();
	}
	/* Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama*/
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|System")
	static void GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that is not supported by BP yet
		UTCTime = FDateTime::FromUnixTimestamp( UnixTimeStamp );
	}

	UFUNCTION(BlueprintPure, Category = "Rama Save System|File IO")
	static void UTCToLocal(const FDateTime& UTCTime, FDateTime& LocalTime)
	{
		//Turn UTC into local ♥ Rama
		FTimespan UTCOffset = FDateTime::Now() - FDateTime::UtcNow();
		LocalTime = UTCTime;
		LocalTime += UTCOffset;
		//♥ Rama
	}
	
	//~~~~~~~~~~
	// 	Pixels
	//~~~~~~~~~~
	
	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama 
		CommunityTip from DarkFlash007: Make sure “Mip Gen Setting” is set to “Nomipmaps” */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="image png jpg jpeg bmp bitmap ico icon exr icns"))
	static UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath,EJoyImageFormats ImageFormat,bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels);

	/** Retrieve a pixel color value given the pixel array, the image height, and the coordinates. Returns false if the coordinates were not valid. Pixel coordinates start from upper left corner as 0,0. X= horizontal, Y = vertical 
		CommunityTip from DarkFlash007: Make sure “Mip Gen Setting” is set to “Nomipmaps” */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="image coordinate index map value"))
	static bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor);

	/** Save an array of pixels to disk as a PNG! It is very important that you supply the curret width and height of the image! Returns false if Width * Height != Array length or file could not be saved to the location specified. I return an ErrorString to clarify what the exact issue was. -Rama 
		CommunityTip from DarkFlash007: Make sure “Mip Gen Setting” is set to “Nomipmaps” */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="create image png jpg jpeg bmp bitmap ico icon exr icns"))
	static bool Victory_SavePixels(const FString& FullFilePath,int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama
		CommunityTip from DarkFlash007: Make sure “Mip Gen Setting” is set to “Nomipmaps” */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="create image png jpg jpeg bmp bitmap ico icon exr icns"))//, DeprecatedFunction, DeprecationMessage="This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin"))
	static bool Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama
		CommunityTip from DarkFlash007: Make sure “Mip Gen Setting” is set to “Nomipmaps”*/
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Load Texture From File",meta=(Keywords="create image png jpg jpeg bmp bitmap ico icon exr icns"))//, DeprecatedFunction, DeprecationMessage="This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin"))
	static bool Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight,TArray<FLinearColor>& PixelArray);
	
	//~~~~~~~~~~
	// 	Viewport
	//~~~~~~~~~~
	
	/** SET the Mouse Position! Returns false if the operation could not occur */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Input")
	static bool Viewport__SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY);

	/** Get the Cursor Position within the Player's Viewport. This will return a result consistent with SET Mouse Position Returns false if the operation could not occur */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Game Window")
	static bool Viewport__GetMousePosition(const APlayerController* ThePC, float& PosX, float& PosY);


	/** Get the coordinates of the center of the player's screen / viewport. Returns false if the operation could not occur */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Game Window")
	static bool Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY);
		
	//~~~~~~~~~~
	// 	World
	//~~~~~~~~~~
	/** Get the names of all currently loaded and visible levels! */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|System", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static void GetNamesOfLoadedLevels(UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);
	
	//~~~~~~~~~~
	// 	Strings
	//~~~~~~~~~~
	
	/** Saves text to filename of your choosing, make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\MyGameDir\BPSavedTextFiles */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|File IO")
	static bool FileIO__SaveStringTextToFile(FString SaveDirectory, FString JoyfulFileName, FString SaveText, bool AllowOverWriting = false, bool AllowAppend = false);

	/** Saves multiple Strings to filename of your choosing, with each string on its own line! Make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\MyGameDir\BPSavedTextFiles */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|File IO")
	static bool FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting = false, bool AllowAppend = false);
	
	/** Loads a text file from hard disk and parses it into a String array, where each entry in the string array is 1 line from the text file. Option to exclude lines that are only whitespace characters or '\n'. Returns the size of the final String Array that was created. Returns false if the file could be loaded from hard disk. */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|File IO")
	static bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath = "Enter Full File Path", bool ExcludeEmptyLines = false);

	/** Load a text file to a single string that you can use ParseIntoArray on newline characters if you want same format as LoadStringArrayFromFile. This version supports unicode characters! */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|File IO")
	static bool LoadStringFromFile(FString& Result, FString FullFilePath = "Enter Full File Path");
	
	/**
	 * Returns whether or not the SearchIn string contains the supplied Substring.
	 * 	Ex: "cat" is a contained within "concatenation" as a substring.
	 * @param SearchIn The string to search within
	 * @param Substring The string to look for in the SearchIn string
	 * @param bUseCase Whether or not to be case-sensitive
	 * @param bSearchFromEnd Whether or not to start the search from the end of the string instead of the beginning
	 */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|String")
	static bool HasSubstring(const FString& SearchIn, const FString& Substring, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase, ESearchDir::Type SearchDir = ESearchDir::FromStart);

	/** Combines two strings together! The Separator and the Labels are optional*/
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|String")
	static FString String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator = "", FString StringFirstLabel = "", FString StringSecondLabel = "");

	/** Separator is always a space */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|String", meta=( Keywords = "concatenate append", CommutativeAssociativeBinaryOperator = "true"))
	static FString String__CombineStrings_Multi(FString A, FString B);
	
	//~~~~~~~~~~
	// 	OS
	//~~~~~~~~~~
	
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|String")
	static bool IsAlphaNumeric(const FString& String);
	
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|String")
	static void Victory_GetStringFromOSClipboard(FString& FromClipboard);

	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|String")
	static void Victory_SaveStringToOSClipboard(const FString& ToClipboard);
	
	/** Is the Current Game Window the Foreground window in the OS, or in the Editor? This will be accurate in standalone running of the game as well as in the editor PIE */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Game Window")
	static bool ClientWindow__GameWindowIsForeGroundInOS();
	
	//~~~~~~~~~~~~~~
	// 	    AI
	//~~~~~~~~~~~~~~
	
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|AI",meta=(WorldContext="WorldContextObject"))
	static AActor* GetClosestActorOfClassInRadiusOfLocation(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FVector Center, float Radius, bool& IsValid);

	UFUNCTION(BlueprintPure, Category = "Victory BP Library|AI",meta=(WorldContext="WorldContextObject"))
	static AActor* GetClosestActorOfClassInRadiusOfActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, AActor* ActorCenter, float Radius, bool& IsValid);

	
	//~~~~~~~~~~~~~~
	// 	Windows OS
	//~~~~~~~~~~~~~~
	
	/** Flashes the game on the windows OS task bar! Please note this won't look the best in PIE, flashing is smoother in Standalone or packaged game. You can use GameWindowIsForeGroundInOS to see if there is a need to get the user's attention! <3 Rama */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Game Window")
	static void FlashGameOnTaskBar(APlayerController* PC, bool FlashContinuous=false, int32 MaxFlashCount = 3, int32 FlashFrequencyMilliseconds=500);
	
	
	//~~~~~~~~~~~~~~~~~
	// Config Vars
	//~~~~~~~~~~~~~~~~~
	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	//UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars!")
	//static uint8 Victory_ConvertStringToByte(UEnum* Enum,FString String);
	//! not working yet, always getting 255

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static int32 VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);

	UFUNCTION(BlueprintPure, Category = "Victory BP Library|Custom Config Vars")
	static FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);

	//~~~~~~~~~~~~~~~~~~~~

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
		static void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);


	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|Custom Config Vars")
	static void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);
	
	//~~~~~~~~~~~~~~~~~
	// TK Math Library!
	//~~~~~~~~~~~~~~~~~
	
	/**
	* Find closest points between 2 line segments.
	* @param	(Line1Start, Line1End)	defines the first line segment.
	* @param	(Line2Start, Line2End)	defines the second line segment.
	* @param	LinePoint1		Closest point on segment 1 to segment 2.
	* @param	LinePoint2		Closest point on segment 2 to segment 1.
	*/
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|TK-Master Math|Vector|Intersection")
	static void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2)
	{
		FMath::SegmentDistToSegmentSafe(Line1Start, Line1End, Line2Start, Line2End, LinePoint1, LinePoint2);
	}
	
	/*
	* Calculate the closest points between two infinitely long lines.
	* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.
	* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.
	* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.
	* @param linePoint1 Line point of the first line.
	* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.
	* @param linePoint2 Line point of the second line.
	* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.
	* @return true if lines are parallel, false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Victory BP Library|TK-Master Math|Vector")
	static bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector linePoint1, FVector lineVec1, FVector linePoint2, FVector lineVec2);

};
