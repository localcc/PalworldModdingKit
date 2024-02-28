#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalSphereBodyBase.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class APalSphereBodyBase : public AActor {
    GENERATED_BODY()
public:
    APalSphereBodyBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInternal(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSneakBonusFlagInternal(bool isSneak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureLevelInternal(int32 Level);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
};

