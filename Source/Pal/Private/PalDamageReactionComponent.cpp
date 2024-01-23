#include "PalDamageReactionComponent.h"
#include "PalHitEffectSlot.h"

void UPalDamageReactionComponent::SlipDamageAndBlowWhenDead(int32 Damage, FVector Velocity) {
}

void UPalDamageReactionComponent::SlipDamage(int32 Damage, bool ShieldIgnore) {
}

void UPalDamageReactionComponent::ProcessDeath_ToServer_Implementation() {
}

void UPalDamageReactionComponent::ProcessDamage_ToServer_Implementation(const FPalDamageInfo& Info) {
}

void UPalDamageReactionComponent::PopupDamageBySlipDamage_ToALL_Implementation(int32 Damage) {
}

void UPalDamageReactionComponent::PlayEachDamageReaction_Implementation(FPalEachDamageRactionInfo EachReactionInfo) {
}

void UPalDamageReactionComponent::PlayDamageReaction_Implementation(FPalDamageRactionInfo ReactionInfo) {
}

void UPalDamageReactionComponent::PlayAddDamageMotion(EPalDamageAnimationReactionType reactionType) {
}

void UPalDamageReactionComponent::OnHitNooseTrap(AActor* TrapActor, FVector FixLocation) {
}

void UPalDamageReactionComponent::OnEndDamageMotion(UAnimMontage* Montage, bool bInterrupted) {
}

void UPalDamageReactionComponent::OnDyingDeadEndDelegate_ToALL_Implementation() {
}

void UPalDamageReactionComponent::ForceDamageDelegateForCaptureBall(AActor* Attacker) {
}

void UPalDamageReactionComponent::DeathDamage_ForSelfDestruct(FVector Velocity, EPalWazaID WazaID) {
}

void UPalDamageReactionComponent::CallOnDamageDelegateAlways_Implementation(FPalDamageResult DamageResult) {
}

void UPalDamageReactionComponent::CallDeadDelegate_ToALL_Implementation(FPalDeadInfo DeadInfo) {
}

void UPalDamageReactionComponent::ApplyDamageForMP_Implementation(FPalDamageResult DamageResult) {
}

void UPalDamageReactionComponent::ApplyDamageForHP_Implementation(FPalDamageResult DamageResult) {
}

void UPalDamageReactionComponent::ApplyDamageForDyingHP_Implementation(FPalDamageResult DamageResult) {
}

void UPalDamageReactionComponent::AddDeadImplus_Implementation(FPalDamageResult DamageResult) {
}

UPalDamageReactionComponent::UPalDamageReactionComponent() {
    this->DamageEffectSlotClass = UPalHitEffectSlot::StaticClass();
    this->EffectSlot = NULL;
}

