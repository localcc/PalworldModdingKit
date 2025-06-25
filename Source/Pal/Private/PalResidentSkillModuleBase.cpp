#include "PalResidentSkillModuleBase.h"

UPalResidentSkillModuleBase::UPalResidentSkillModuleBase() {
}

void UPalResidentSkillModuleBase::Tick(float DeltaTime) {
}

void UPalResidentSkillModuleBase::SendNotify_InServer(FName NotifyName, FPalResidentSkillNotifyParameter NotifyParameter) {
}

void UPalResidentSkillModuleBase::OnTick_Implementation(float DeltaTime) {
}

void UPalResidentSkillModuleBase::OnNotify_Implementation(const FName& NotifyName, const FPalResidentSkillNotifyParameter& NotifyParameter) {
}

void UPalResidentSkillModuleBase::OnInitialize_Implementation() {
}

void UPalResidentSkillModuleBase::OnInactivatedAsOtomo_Implementation() {
}

void UPalResidentSkillModuleBase::OnActivatedAsOtomo_Implementation() {
}

bool UPalResidentSkillModuleBase::IsDisabled() const {
    return false;
}

void UPalResidentSkillModuleBase::Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent) {
}

UPalPartnerSkillParameterComponent* UPalResidentSkillModuleBase::GetPartnerSkillParameterComponent() const {
    return NULL;
}

APalCharacter* UPalResidentSkillModuleBase::GetOwner() const {
    return NULL;
}


