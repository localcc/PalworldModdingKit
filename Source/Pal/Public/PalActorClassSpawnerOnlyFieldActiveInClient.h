#pragma once
#include "CoreMinimal.h"
#include "PalActorClassSpawnerInClientBase.h"
#include "PalActorClassSpawnerOnlyFieldActiveInClient.generated.h"

UCLASS(Blueprintable)
class PAL_API APalActorClassSpawnerOnlyFieldActiveInClient : public APalActorClassSpawnerInClientBase {
    GENERATED_BODY()
public:
    APalActorClassSpawnerOnlyFieldActiveInClient(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReturnToFieldFromStage_ClientInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredStage_ClientInternal();
    
};

