#include "PalAISensorComponent.h"
#include "Templates/SubclassOf.h"

UPalAISensorComponent::UPalAISensorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfPawn = NULL;
    this->SightAngleThreshold = 0.00f;
    this->SightDistance = -1.00f;
    this->HearingRate = 0.00f;
    this->HumanAndNoneWeapon = false;
    this->IsIgnoreSoundReaction = false;
    this->RecentMaxSoundLevel = 0.00f;
    this->ResponsedMaxBiologicalGrade = -99999;
    this->AIResponsePreset = NULL;
    this->AISightResponse = NULL;
}

void UPalAISensorComponent::SightCheckAllPlayer(TArray<APalCharacter*>& InSightPlayers, float RangeRate) {
}

void UPalAISensorComponent::SightCheckAllEdibleDeadNPC(TArray<APalCharacter*>& InSightCharacters) {
}

void UPalAISensorComponent::SightCheckAllAliveNPC(TArray<APalCharacter*>& InSightCharacters, bool ignoreOtomo) {
}

void UPalAISensorComponent::Setup() {
}

void UPalAISensorComponent::SetDisableSightFlag(FName flagName, bool isDisable) {
}

void UPalAISensorComponent::SetDisableEscape() {
}

void UPalAISensorComponent::SetDebugAIResponse(TSubclassOf<UPalAIResponsePreset> PresetClass) {
}

EPalAIResponseType UPalAISensorComponent::SelectResponseBySenses(EPalAIResponseType CurrentBehavior, const TArray<APalCharacter*>& FindCharacters, bool IsDamaged, APalCharacter*& OutTargetCharacter) {
    return EPalAIResponseType::Ignore;
}

void UPalAISensorComponent::ResetResponsedMaxBiologicalGrade() {
}

void UPalAISensorComponent::ReceiveSound(int32 SoundRadius, FVector EmitLocation, AActor* Emitter) {
}

void UPalAISensorComponent::OnResponseSpecialLookat() {
}

bool UPalAISensorComponent::IsInSightKillerAndDeadBody(AActor* Killer, AActor* DeadBody) {
    return false;
}

void UPalAISensorComponent::EnableHearing() {
}

void UPalAISensorComponent::DisableHearing() {
}

void UPalAISensorComponent::DeadAutoRemoveDelegate(FPalDeadInfo DeadInfo) {
}


