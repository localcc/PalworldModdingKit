#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/TextWidgetTypes.h"
#include "Components/Widget.h"
#include "PalMultiLineEditableTextBox.generated.h"

UCLASS(Blueprintable)
class UPalMultiLineEditableTextBox : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMultiLineEditableTextBoxCommittedEvent, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiLineEditableTextBoxChangedEvent, const FText&, Text);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetText HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiLineEditableTextBoxChangedEvent OnTextChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiLineEditableTextBoxCommittedEvent OnTextCommitted;
    
    UPalMultiLineEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetTextStyle(const FTextBlockStyle& InTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintCallable)
    void SetForegroundColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetError(FText InError);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHintText() const;
    
};

