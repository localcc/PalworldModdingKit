#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFixedWeaponDestroySaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFixedWeaponDestroySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DestroyedWeapon;
    
    PAL_API FPalFixedWeaponDestroySaveData();
};

