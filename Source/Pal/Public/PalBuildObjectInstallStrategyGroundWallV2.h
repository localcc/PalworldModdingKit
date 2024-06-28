#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyGroundWallV2.generated.h"

class AActor;
class APalBuildObject;

UCLASS(Blueprintable)
class UPalBuildObjectInstallStrategyGroundWallV2 : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyGroundWallV2();

};

