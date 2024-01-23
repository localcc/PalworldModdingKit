#include "PalTreasureBoxVisualBase.h"
#include "PalSkeletalMeshComponent.h"

void APalTreasureBoxVisualBase::SetTickEnabled(bool bEnabled) {
}


void APalTreasureBoxVisualBase::OnPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

APalTreasureBoxVisualBase::APalTreasureBoxVisualBase() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<UPalSkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

