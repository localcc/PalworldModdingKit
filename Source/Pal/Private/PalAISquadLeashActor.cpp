#include "PalAISquadLeashActor.h"

APalAISquadLeashActor::APalAISquadLeashActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Squad = NULL;
    this->SquadLeader = NULL;
}

APalAISquadLeashActor* APalAISquadLeashActor::SpawnSquadLeash(UPalSquad* NewSquad, float InLeashInnerRadius, float InLeashOuterRadius, float InInvokerExtentRadius, bool bInAutoActivateLeash) {
    return NULL;
}

void APalAISquadLeashActor::OnRemovedSquadMember(AActor* RemovedMember) {
}

void APalAISquadLeashActor::OnDeadSquadMember(FPalDeadInfo DeadInfo) {
}

void APalAISquadLeashActor::OnAddedSquadMember(AActor* AddedMember) {
}


