#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBuildObjectInstallStrategyBase.generated.h"

class APalBuildObject;

UCLASS(Abstract, Blueprintable)
class UPalBuildObjectInstallStrategyBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* TargetBuildObject;
    
public:
    UPalBuildObjectInstallStrategyBase();
};

