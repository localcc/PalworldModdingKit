#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalNetArchive.h"
#include "PalTestNetArchiveTransmition.generated.h"

UCLASS(Blueprintable)
class APalTestNetArchiveTransmition : public AActor {
    GENERATED_BODY()
public:
    APalTestNetArchiveTransmition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendTest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRecieveTest(const FPalNetArchive& Ar);
    
};

