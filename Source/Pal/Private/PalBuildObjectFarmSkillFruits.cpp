#include "PalBuildObjectFarmSkillFruits.h"
#include "Net/UnrealNetwork.h"

APalBuildObjectFarmSkillFruits::APalBuildObjectFarmSkillFruits(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrowupFX = NULL;
    this->HarvestSE = NULL;
    this->SkillFruitsTree = NULL;
}

void APalBuildObjectFarmSkillFruits::OnUpdateState(EPalFarmSkillFruitsState NextCropState) {
}

void APalBuildObjectFarmSkillFruits::OnUpdateProductSlot_ServerInternal(int32 ProductIndex, FName StaticItemId) {
}

void APalBuildObjectFarmSkillFruits::OnTriggerInteractHarvest(int32 ProductIndex, AActor* OtherActor) {
}

void APalBuildObjectFarmSkillFruits::OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void APalBuildObjectFarmSkillFruits::OnRepSkillFruitsTree() {
}

void APalBuildObjectFarmSkillFruits::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBuildObjectFarmSkillFruits, SkillFruitsTree);
}


