#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CapsuleLimit.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "KawaiiPhysicsLimitsDataAsset.generated.h"

UCLASS(Blueprintable)
class KAWAIIPHYSICS_API UKawaiiPhysicsLimitsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanarLimit> PlanarLimits;
    
    UKawaiiPhysicsLimitsDataAsset();

};

