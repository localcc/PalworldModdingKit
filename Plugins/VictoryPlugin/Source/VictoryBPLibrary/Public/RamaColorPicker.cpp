
#include "RamaColorPicker.h"

#include "UObject/ConstructorHelpers.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "SJoyColorPicker.h"

#define LOCTEXT_NAMESPACE "UMG"

URamaColorPicker::URamaColorPicker(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, JoyColor(FLinearColor::Red)
{}

#if WITH_EDITOR
/*
const FSlateBrush* UJoyColorWheel::GetEditorIcon()
{
	return FUMGStyle::Get().GetBrush("Widget.Image");
}
*/ 
 
const FText URamaColorPicker::GetPaletteCategory()
{
	return LOCTEXT("Victory Plugin", "Victory Plugin");
}

void URamaColorPicker::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
  
	//Update Picker to JoyColor property change!
	if (PropertyName == TEXT("JoyColor"))
	{  
		SetJoyColor(JoyColor,true);
	}	
} 
#endif

void URamaColorPicker::SetJoyColor(FLinearColor NewColor, bool SkipAnimation)
{
	if(!MySlateColorPicker.IsValid()) 
	{
		return;
	}
	
	//Skip Anim?
	if(SkipAnimation)
	{
		MySlateColorPicker->InstantColor = NewColor; 
		MySlateColorPicker->Animation_SkipToFinalForOneTick = true;		//See SJoyColorPicker.h
	}
	else
	{
		//Set!
		MySlateColorPicker->SetColorRGB(NewColor);
	}
}

void URamaColorPicker::ColorUpdated(FLinearColor NewValue)
{
	JoyColor = NewValue; 
	 
	if(OnColorChanged.IsBound())
	{
		OnColorChanged.Broadcast(JoyColor);
	}
} 

TSharedRef<SWidget> URamaColorPicker::RebuildWidget()
{
	MySlateColorPicker = SNew( SJoyColorPicker )
		.TargetColorAttribute( JoyColor )
		.OnColorCommitted( FOnLinearColorValueChanged::CreateUObject( this, &URamaColorPicker::ColorUpdated) );
	
	return MySlateColorPicker.ToSharedRef();
}

//Release
void URamaColorPicker::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	if(MySlateColorPicker.IsValid()) 
	{
		MySlateColorPicker.Reset();
	}
}

void URamaColorPicker::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	 
	SetJoyColor(JoyColor,true);
}


/////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE