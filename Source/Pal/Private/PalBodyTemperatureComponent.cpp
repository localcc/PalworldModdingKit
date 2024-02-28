#include "PalBodyTemperatureComponent.h"
#include "Net/UnrealNetwork.h"

UPalBodyTemperatureComponent::UPalBodyTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfKeyName = TEXT("BodyTemperatureComponent");
}

void UPalBodyTemperatureComponent::RemoveHeatSource(FName UniqueName) {
}

void UPalBodyTemperatureComponent::OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalBodyTemperatureComponent::OnUpdateEquipment(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType) {
}

void UPalBodyTemperatureComponent::OnRep_TemperatureInfo() {
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

void UPalBodyTemperatureComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyTemperatureComponent, TemperatureInfo);
}


