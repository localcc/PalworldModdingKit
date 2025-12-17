#include "PalSkillDamageReactionComponent.h"
#include "Net/UnrealNetwork.h"

UPalSkillDamageReactionComponent::UPalSkillDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableFriendAttack = true;
    this->bEnableHPReaction = false;
    this->WeakElement = EPalElementType::None;
    this->WeakElementRate = 1.00f;
    this->NonWeakElementRate = 1.00f;
    this->EffectSlot = NULL;
    this->CurrentHP = 0.00f;
    this->MaxHP = 0.00f;
}

void UPalSkillDamageReactionComponent::SetMaxHP(const float NewMaxHP) {
}

void UPalSkillDamageReactionComponent::OnRep_UpdateCurrentHP() {
}

void UPalSkillDamageReactionComponent::OnRep_MaxHP() {
}

void UPalSkillDamageReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalSkillDamageReactionComponent, CurrentHP);
    DOREPLIFETIME(UPalSkillDamageReactionComponent, MaxHP);
}


