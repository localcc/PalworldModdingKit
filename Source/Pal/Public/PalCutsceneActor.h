#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "PalCutsceneActor.generated.h"

UCLASS(Blueprintable)
class APalCutsceneActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningFadeOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningFadeOutTime;
    
    APalCutsceneActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePlayCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedCutscene();
    
};

