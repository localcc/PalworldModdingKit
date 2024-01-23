#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalSpecialAttackRateType.h"
#include "PalDamageInfo.h"
#include "PalDamageInfoUtility.generated.h"

UCLASS(Blueprintable)
class UPalDamageInfoUtility : public UObject {
    GENERATED_BODY()
public:
    UPalDamageInfoUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSpecialAttackRate(const FPalDamageInfo& DamageInfo, const EPalSpecialAttackRateType Type);
    
};

