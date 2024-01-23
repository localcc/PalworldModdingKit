#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "PalComboBoxString.generated.h"

UCLASS(Blueprintable)
class UPalComboBoxString : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedEvent, const FString&, SelectedItem, TEnumAsByte<ESelectInfo::Type>, SelectionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpeningEvent);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DefaultOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedOption;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableRowStyle ItemStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ContentPadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxListHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasDownArrow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGamepadNavigationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGenerateWidgetForString OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGenerateWidgetForString OnGenerateTopWidgetEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedEvent OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpeningEvent OnOpening;
    
    UPalComboBoxString();
    UFUNCTION(BlueprintCallable)
    void SetSelectedOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOptionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOptionAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindOptionIndex(const FString& Option) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearOptions();
    
    UFUNCTION(BlueprintCallable)
    void AddOption(const FString& Option);
    
};

