#include "PalAILeashActor.h"

APalAILeashActor::APalAILeashActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeashedCharacter = NULL;
}

APalAILeashActor* APalAILeashActor::SpawnLeash(APalAIController* InInstigatorController, float InLeashInnerRadius, float InLeashOuterRadius, float InInvokerExtentRadius, bool bInAutoActivateLeash) {
    return NULL;
}


