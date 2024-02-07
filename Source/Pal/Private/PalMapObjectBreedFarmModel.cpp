#include "PalMapObjectBreedFarmModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectBreedFarmModel::UPalMapObjectBreedFarmModel() {
    this->ExistPalEggMaxNum = 0;
    this->BreedRequiredRealTime = 0.00f;
    this->BreedProgressTime = 0.00f;
}

void UPalMapObjectBreedFarmModel::OnUpdateAssignedCharacter(UPalWorkBase* Work) {
}

void UPalMapObjectBreedFarmModel::OnRep_UpdateBreedProgress() {
}

void UPalMapObjectBreedFarmModel::GetBreedProgress(float& NowProgress, float& MaxProgress) {
}

bool UPalMapObjectBreedFarmModel::CanProceedBreeding() const {
    return false;
}

EPalItemOperationResult UPalMapObjectBreedFarmModel::CanConsumeBreedItem(FPalItemSlotIdAndNum& ConsumableItem) const {
    return EPalItemOperationResult::Success;
}

void UPalMapObjectBreedFarmModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectBreedFarmModel, BreedRequiredRealTime);
    DOREPLIFETIME(UPalMapObjectBreedFarmModel, BreedProgressTime);
    DOREPLIFETIME(UPalMapObjectBreedFarmModel, TargetBreedItemIds);
}


