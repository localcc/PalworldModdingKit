#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigCombatHeliWeaponType.h"
#include "PalOilrigCombatHeliRandomWeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalOilrigCombatHeliRandomWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOilrigCombatHeliWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PAL_API FPalOilrigCombatHeliRandomWeaponInfo();
};

