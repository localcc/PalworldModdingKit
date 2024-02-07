#include "PalTreasureBoxVisualBase.h"
#include "PalSkeletalMeshComponent.h"

APalTreasureBoxVisualBase::APalTreasureBoxVisualBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UPalSkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->SkeletalMeshComponent = (UPalSkeletalMeshComponent*)RootComponent;
}

void APalTreasureBoxVisualBase::SetTickEnabled(bool bEnabled) {
}


void APalTreasureBoxVisualBase::OnPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}


