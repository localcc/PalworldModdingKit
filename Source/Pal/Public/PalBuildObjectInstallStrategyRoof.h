#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyRoof.generated.h"

class APalBuildObject;

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectInstallStrategyRoof : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyRoof();
};

