#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalAIDamageReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalAIDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalAIDamageReactionComponent();
    UFUNCTION(BlueprintCallable)
    void FunctionTest();
    
};

