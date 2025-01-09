#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "PalCutsceneActor.generated.h"

class UPalCutsceneBindParameter;

UCLASS(Blueprintable)
class APalCutsceneActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSkip;
    
    APalCutsceneActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTransformOrigin(const FTransform& TransformOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBindParameter(UPalCutsceneBindParameter* BindParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePlayCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedCutscene();
    
};

