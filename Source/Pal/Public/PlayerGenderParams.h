#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponType.h"
#include "PlayerGenderParams.generated.h"

class APalWeaponBase;
class UPalShooterAnimeAssetBase;

USTRUCT(BlueprintType)
struct FPlayerGenderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, TSoftClassPtr<UPalShooterAnimeAssetBase>> DefaultWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APalWeaponBase>, TSoftClassPtr<UPalShooterAnimeAssetBase>> OtherWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClavicleAdjustDegree;
    
    PAL_API FPlayerGenderParams();
};

