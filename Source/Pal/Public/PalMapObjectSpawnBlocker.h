#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalMapObjectSpawnBlocker.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnBlocker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbabilityActivate;
    
public:
    APalMapObjectSpawnBlocker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActivateBlock(const bool bActivate);
    
};

