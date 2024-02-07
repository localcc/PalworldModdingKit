#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDismantleObjectChecker.generated.h"

class APalBuildObject;

UCLASS(Blueprintable)
class APalDismantleObjectChecker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalBuildObject* TargetBuildObject;
    
public:
    APalDismantleObjectChecker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBuildObject* GetTargetObject();
    
};

