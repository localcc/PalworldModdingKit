#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObjectInstallStrategySinkableNormal.h"
#include "PalBuildObjectInstallStrategyBaseCampPoint.generated.h"

class APalBuildObjectBaseCampPoint;

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectInstallStrategyBaseCampPoint : public UPalBuildObjectInstallStrategySinkableNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObjectBaseCampPoint* TargetBuildObjectCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CannotOverlapAreaBox;
    
public:
    UPalBuildObjectInstallStrategyBaseCampPoint();

};

