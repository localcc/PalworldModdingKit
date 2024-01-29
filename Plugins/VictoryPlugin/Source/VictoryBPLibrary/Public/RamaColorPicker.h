#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "Widgets/SWidget.h"
#include "Components/Widget.h"

#include "RamaColorPicker.generated.h"

class SJoyColorPicker;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoyColorChangedEvent, const FLinearColor&, NewColor);

/**
 * Rama Color Picker For You! ♥ Rama
 */
UCLASS()
class VICTORYBPLIBRARY_API URamaColorPicker : public UWidget
{
	GENERATED_UCLASS_BODY()
	
public:
	
	/** The currently Chosen Color for this Color Picker! ♥ Rama*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Rama Color Picker",meta=(Keywords="getcolor"))
	FLinearColor JoyColor = FLinearColor::Red;
	
	/** Called whenever the color is changed programmatically or interactively by the user */
	UPROPERTY(BlueprintAssignable, Category="Rama Color Picker", meta=(DisplayName="OnColorChanged (Rama Color Picker)"))
	FOnJoyColorChangedEvent OnColorChanged;
	
	/**
	 * Directly sets the current color, for saving user preferences of chosen color, or loading existing color of an in-game clicked actor!
	 * @param InColor The color to assign to the widget
	 */
	UFUNCTION(BlueprintCallable, Category = "Rama Color Picker",meta=(Keywords="setcolor"))
	void SetJoyColor(FLinearColor NewColor, bool SkipAnimation=false);
	
public:
	void ColorUpdated(FLinearColor NewValue);

#if WITH_EDITOR
public:
	
	// UWidget interface
	//virtual const FSlateBrush* GetEditorIcon() override;
	virtual const FText GetPaletteCategory() override;
	// End UWidget interface
	
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	// End of UObject interface
	
#endif

public:
	
	//~ Begin UWidget Interface
	virtual void SynchronizeProperties() override;
	//~ End UWidget Interface
	
protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	// End of UWidget
	
	// UVisual interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	// End of UVisual interface
	
protected:
	TSharedPtr<SJoyColorPicker> MySlateColorPicker;
	
};
