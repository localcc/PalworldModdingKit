#include "PalMapObjectFarmBlockV2Model.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectFarmBlockV2Model::UPalMapObjectFarmBlockV2Model() {
    this->StateBehaviourMachine = NULL;
    this->CurrentState = EPalFarmCropState::None;
    this->CropProgressRateValue = 0.00f;
    this->WaterStackRateValue = 0.00f;
}

void UPalMapObjectFarmBlockV2Model::OnUpdateWaterStackRate(const float UpdatedRate) {
}

void UPalMapObjectFarmBlockV2Model::OnUpdateCropProgressRate(const float ProgressRate) {
}

void UPalMapObjectFarmBlockV2Model::OnRep_WaterStackRateValue() {
}

void UPalMapObjectFarmBlockV2Model::OnRep_CurrentState() {
}

void UPalMapObjectFarmBlockV2Model::OnRep_CropProgressRateValue() {
}

EPalFarmCropState UPalMapObjectFarmBlockV2Model::GetCurrentState() const {
    return EPalFarmCropState::None;
}

FName UPalMapObjectFarmBlockV2Model::GetCurrentCropDataId() const {
    return NAME_None;
}

void UPalMapObjectFarmBlockV2Model::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFarmBlockV2Model, CurrentCropDataId);
    DOREPLIFETIME(UPalMapObjectFarmBlockV2Model, CurrentState);
    DOREPLIFETIME(UPalMapObjectFarmBlockV2Model, CropProgressRateValue);
    DOREPLIFETIME(UPalMapObjectFarmBlockV2Model, WaterStackRateValue);
}


