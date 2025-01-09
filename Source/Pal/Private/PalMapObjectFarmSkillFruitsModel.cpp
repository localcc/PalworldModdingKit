#include "PalMapObjectFarmSkillFruitsModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectFarmSkillFruitsModel::UPalMapObjectFarmSkillFruitsModel() {
    this->StateBehaviourMachine = NULL;
    this->MenuUIWidgetClass = NULL;
    this->CurrentState = EPalFarmSkillFruitsState::None;
    this->bCanTransportOutProduct = false;
    this->SkillFruitsProgressRateValue = 0.00f;
}

void UPalMapObjectFarmSkillFruitsModel::RequestSetCanTransportOutProduct_ServerInternal(const int32 RequestPlayerId, bool bInCanTransportOutProduct) {
}

void UPalMapObjectFarmSkillFruitsModel::RequestHarvest_ServerInternal(const int32 RequestPlayerId, int32 ProductIndex) {
}

void UPalMapObjectFarmSkillFruitsModel::OnUpdateSkillFruitsProgressRate(const float ProgressRate) {
}

void UPalMapObjectFarmSkillFruitsModel::OnUpdateProductSlot(UPalItemSlot* itemSlot) {
}

void UPalMapObjectFarmSkillFruitsModel::OnUpdateContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectFarmSkillFruitsModel::OnRep_SkillFruitsProgressRateValue() {
}

void UPalMapObjectFarmSkillFruitsModel::OnRep_CurrentState() {
}

void UPalMapObjectFarmSkillFruitsModel::NotifyHarvestResult(const FPalNetArchive& Archive) {
}

FName UPalMapObjectFarmSkillFruitsModel::GetPlantedSkillFruitsId() const {
    return NAME_None;
}

EPalFarmSkillFruitsState UPalMapObjectFarmSkillFruitsModel::GetCurrentState() const {
    return EPalFarmSkillFruitsState::None;
}

void UPalMapObjectFarmSkillFruitsModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFarmSkillFruitsModel, PlantedSkillFruitsId);
    DOREPLIFETIME(UPalMapObjectFarmSkillFruitsModel, MenuUIWidgetClass);
    DOREPLIFETIME(UPalMapObjectFarmSkillFruitsModel, CurrentState);
    DOREPLIFETIME(UPalMapObjectFarmSkillFruitsModel, bCanTransportOutProduct);
    DOREPLIFETIME(UPalMapObjectFarmSkillFruitsModel, SkillFruitsProgressRateValue);
}


