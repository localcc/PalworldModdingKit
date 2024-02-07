#include "PalBodyTemperatureComponent.h"

UPalBodyTemperatureComponent::UPalBodyTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTemperature = 0;
    this->SelfKeyName = TEXT("BodyTemperatureComponent");
    this->CurrentResistRank_Heat = 0;
    this->CurrentResistRank_Cold = 0;
    this->CurrentBodyState = EPalBodyTemperatureState::Default;
}

void UPalBodyTemperatureComponent::RequestReSend_ToServer_Implementation() {
}

void UPalBodyTemperatureComponent::RemoveHeatSource(FName UniqueName) {
}

void UPalBodyTemperatureComponent::OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalBodyTemperatureComponent::OnUpdateEquipment(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType) {
}

void UPalBodyTemperatureComponent::OnInitializedPlayer_ForClient(APalCharacter* Character) {
}

void UPalBodyTemperatureComponent::OnInitializedPlayer(APalCharacter* Character) {
}

void UPalBodyTemperatureComponent::OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType) {
}

void UPalBodyTemperatureComponent::OnChangeHour() {
}

void UPalBodyTemperatureComponent::CallOnChangeTemperature_Implementation(int32 Next) {
}

void UPalBodyTemperatureComponent::CallOnChangeResistRank_Implementation(int32 Heat, int32 Cold) {
}

void UPalBodyTemperatureComponent::CallOnChangeBodyState_Implementation(EPalBodyTemperatureState State) {
}

void UPalBodyTemperatureComponent::CallAllDelegate() {
}

void UPalBodyTemperatureComponent::AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo) {
}

void UPalBodyTemperatureComponent::AddHeatSource(FName UniqueName, int32 HeatLevel) {
}


