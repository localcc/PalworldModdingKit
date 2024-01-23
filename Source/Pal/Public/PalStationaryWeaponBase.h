#pragma once
#include "CoreMinimal.h"
#include "PalWeaponBase.h"
#include "PalStationaryWeaponBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalStationaryWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
    APalStationaryWeaponBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetAttackableDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetAttackableAngle();
    
};

