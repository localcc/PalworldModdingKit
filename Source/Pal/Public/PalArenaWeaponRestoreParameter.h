#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalArenaWeaponRestoreParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaWeaponRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BulletNum;
    
    PAL_API FPalArenaWeaponRestoreParameter();
};

