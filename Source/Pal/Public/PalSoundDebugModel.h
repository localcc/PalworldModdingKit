#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalSoundDebugModel.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class APalSoundDebugModel : public AActor {
    GENERATED_BODY()
public:
    APalSoundDebugModel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize(UAkAudioEvent* AudioEvent);
    
};

