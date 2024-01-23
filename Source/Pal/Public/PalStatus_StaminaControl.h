#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatus_StaminaControl.generated.h"

class UPalCharacterMovementComponent;

UCLASS(Blueprintable)
class PAL_API UPalStatus_StaminaControl : public UPalStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLocalPlayerOrPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPreCliming;
    
public:
    UPalStatus_StaminaControl();
private:
    UFUNCTION(BlueprintCallable)
    void DecreaseStepStamina();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseJumpStamina(UPalCharacterMovementComponent* Movement);
    
};

