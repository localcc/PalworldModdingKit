#include "PalCutsceneActor.h"

APalCutsceneActor::APalCutsceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpeningFadeOutDelay = 0.00f;
    this->OpeningFadeOutTime = 0.00f;
    this->bCanSkip = true;
}

void APalCutsceneActor::SetTransformOrigin(const FTransform& TransformOrigin) {
}





