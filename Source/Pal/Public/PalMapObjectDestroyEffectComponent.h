#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectDestroyEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectDestroyEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectDestroyEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFX();
    
};

