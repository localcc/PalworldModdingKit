#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalEquipWeaponInfo.generated.h"

class APalMonsterEquipWeaponBase;

USTRUCT(BlueprintType)
struct FPalEquipWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMonsterEquipWeaponBase* SpawnedWeapon;
    
    PAL_API FPalEquipWeaponInfo();
};

