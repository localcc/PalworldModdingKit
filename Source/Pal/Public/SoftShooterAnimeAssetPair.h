#pragma once
#include "CoreMinimal.h"
#include "SoftShooterAnimeAssetPair.generated.h"

class UPalShooterAnimeAssetBase;

USTRUCT(BlueprintType)
struct FSoftShooterAnimeAssetPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalShooterAnimeAssetBase> FemaleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalShooterAnimeAssetBase> MaleAnim;
    
    PAL_API FSoftShooterAnimeAssetPair();
};

