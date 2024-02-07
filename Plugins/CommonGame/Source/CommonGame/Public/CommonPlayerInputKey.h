#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseTypes.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "ECommonKeybindForcedHoldStatus.h"
#include "MeasuredText.h"
#include "CommonPlayerInputKey.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONGAME_API UCommonPlayerInputKey : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoundAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey BoundKeyFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonKeybindForcedHoldStatus ForcedHoldKeybindStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldKeybind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowKeybindBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D FrameSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTimeCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey BoundKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoldProgressBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush KeyBindTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUnboundStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo KeyBindTextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo CountdownTextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMeasuredText CountdownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMeasuredText KeybindText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMargin KeybindTextPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D KeybindFrameMinimumSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PercentageMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressPercentageMID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush CachedKeyBrush;
    
public:
    UCommonPlayerInputKey();

    UFUNCTION(BlueprintCallable)
    void UpdateKeybindWidget();
    
    UFUNCTION(BlueprintCallable)
    void StopHoldProgress(FName HoldActionName, bool bCompletedSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void StartHoldProgress(FName HoldActionName, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetShowProgressCountDown(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetNameOverride(const FName NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedHoldKeybind(bool InForcedHoldKeybind);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundKey(FKey NewBoundAction);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundAction(FName NewBoundAction);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisScale(const float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldKeybind() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBoundKeyValid() const;
    
};

