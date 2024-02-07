#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalSphereBodyBase.generated.h"

UCLASS(Blueprintable)
class APalSphereBodyBase : public AActor {
    GENERATED_BODY()
public:
    APalSphereBodyBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
};

