#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBuildObjectInstallStrategyBase.generated.h"

class AActor;
class APalBuildObject;

UCLASS(Abstract, Blueprintable)
class UPalBuildObjectInstallStrategyBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* TargetBuildObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SnapHitActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* SnapHitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyBase();

};

