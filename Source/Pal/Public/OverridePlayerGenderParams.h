#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponType.h"
#include "SoftShooterAnimeAssetPair.h"
#include "OverridePlayerGenderParams.generated.h"

USTRUCT(BlueprintType)
struct FOverridePlayerGenderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, FSoftShooterAnimeAssetPair> OverrideDefaultWeaponAnimPair;
    
    PAL_API FOverridePlayerGenderParams();
};

