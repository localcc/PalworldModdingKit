#include "PalDamageReactionComponent.h"
#include "PalHitEffectSlot.h"

UPalDamageReactionComponent::UPalDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageEffectSlotClass = UPalHitEffectSlot::StaticClass();
    this->EffectSlot = NULL;
    this->DisableLargeDown = false;
}

void UPalDamageReactionComponent::SlipDamageAndBlowWhenDead(int32 Damage, FVector Velocity) {
}

void UPalDamageReactionComponent::SlipDamage(int32 Damage, bool ShieldIgnore, EPalDeadType DeadType) {
}

void UPalDamageReactionComponent::ShowDeadDebugLog(FPalDeadInfo DeadInfo) {
}

void UPalDamageReactionComponent::SetDisableLargeDown() {
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

bool UPalDamageReactionComponent::IsIgnoreElementStatus(EPalAdditionalEffectType Effect) {
    return false;
}

FPalInstanceID UPalDamageReactionComponent::GetLastAttackerInstanceID() {
    return FPalInstanceID{};
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


