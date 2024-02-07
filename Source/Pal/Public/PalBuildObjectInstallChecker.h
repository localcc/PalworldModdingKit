#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalBuildObjectInstallChecker.generated.h"

class APalBuildObject;
class UPalBuildObjectInstallStrategyBase;
class UPalBuildObjectOverlapChecker;
class UShapeComponent;

UCLASS(Blueprintable)
class APalBuildObjectInstallChecker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* TargetBuildObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UShapeComponent* OverlapCheckComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildObjectOverlapChecker* OverlapChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildObjectInstallStrategyBase* InstallStrategy;
    
public:
    APalBuildObjectInstallChecker(const FObjectInitializer& ObjectInitializer);

};

