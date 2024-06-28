#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyNormal.generated.h"

UCLASS(Blueprintable)
class UPalBuildObjectInstallStrategyNormal : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
    UPalBuildObjectInstallStrategyNormal();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStandAlongSurface() const;
    
};

