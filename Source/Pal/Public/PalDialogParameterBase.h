#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "EPalDialogType.h"
#include "PalDialogBoolCallbackDelegate.h"
#include "PalDialogCallbackDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalDialogParameterBase.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameterBase : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> TextJustify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDialogBoolCallback Callback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDialogCallback CallbackWithParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCloseWhenDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEnableShortcutConfirmInput;
    
    UPalDialogParameterBase();

    UFUNCTION(BlueprintCallable)
    void InvokeCallback(const bool bResult);
    
};

