#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategySinkableNormal.h"
#include "PalBuildObjectInstallStrategyPalStorage.generated.h"

class APalBuildObjectPalStorage;

UCLASS(Blueprintable)
class UPalBuildObjectInstallStrategyPalStorage : public UPalBuildObjectInstallStrategySinkableNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObjectPalStorage* TargetPalStorageCache;
    
public:
    UPalBuildObjectInstallStrategyPalStorage();
};

