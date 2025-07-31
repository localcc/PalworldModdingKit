#include "PalFishingComponent.h"
#include "Net/UnrealNetwork.h"

UPalFishingComponent::UPalFishingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FishingRodModule = NULL;
    this->IsFishingFlag = false;
    this->IsCatchBattleFlag = false;
    this->IsPressedFishingButton = false;
    this->IsAimingFlag = false;
    this->IsSuccessUseBaitFlag = false;
    this->SelectedBaitIndex = -1;
    this->IsRequestedUseBaitFlag = false;
    this->IsRequestedCatchBattleFlag = false;
    this->FishingRodState = EPalFishingRodState::None;
}

void UPalFishingComponent::SetCurrentFishingRodModule(UPalFishingRodModule* InFishingRodModule) {
}

void UPalFishingComponent::PlayActionForOtomo(EPalActionType Type) {
}

void UPalFishingComponent::OnSuccessFight() {
}

void UPalFishingComponent::OnSuccessCatchBattle() {
}

void UPalFishingComponent::OnRep_RodState() {
}

void UPalFishingComponent::OnRep_FishingFloatLocation() {
}

void UPalFishingComponent::OnReleasedFishingButton() {
}

void UPalFishingComponent::OnReceivedSearchResult(const EPalFishingResultType resultType) {
}

void UPalFishingComponent::OnReceivedCreatedCharacter(const FPalGrantCharacterRequestData RequestData) {
}

void UPalFishingComponent::OnPressedFishingButton() {
}

void UPalFishingComponent::OnPickFish() {
}

void UPalFishingComponent::OnFailedFight() {
}

void UPalFishingComponent::OnFailedCatchBattle() {
}

void UPalFishingComponent::OnDead(FPalDeadInfo DeadInfo) {
}

void UPalFishingComponent::OnDamaged(FPalDamageResult DamageResult) {
}

void UPalFishingComponent::OnChangeTargetSpot(APalFishingSpotArea* TargetSpot) {
}

void UPalFishingComponent::OnChangeRodState(EPalFishingRodState State) {
}

void UPalFishingComponent::NotifyStartCatchBattle_ToALL_Implementation(const FGuid& PlayerUId, const FName& PalId) {
}

void UPalFishingComponent::NotifyObtainedCharacter_ToALL_Implementation(const FGuid& PlayerUId, const FPalFishingCutsceneCharacterInfo& CharacterInfo) {
}

void UPalFishingComponent::NotifyFinishCutscene_ToALL_Implementation() {
}

void UPalFishingComponent::NotifyFailedCatchBattle_ToALL_Implementation() {
}

void UPalFishingComponent::NotifyEndFishing_ToALL_Implementation() {
}

bool UPalFishingComponent::IsFishingButtonPressed() const {
    return false;
}

bool UPalFishingComponent::IsFishing() const {
    return false;
}

bool UPalFishingComponent::IsFirstFishing() const {
    return false;
}

bool UPalFishingComponent::IsCatchBattle() const {
    return false;
}

bool UPalFishingComponent::IsAiming() const {
    return false;
}

int32 UPalFishingComponent::GetPlayerInputFishingDirection() const {
    return 0;
}

UPalFishingRodModule* UPalFishingComponent::GetFishingRodModule() const {
    return NULL;
}

void UPalFishingComponent::FinishShowCutscene() {
}

void UPalFishingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFishingComponent, IsFishingFlag);
    DOREPLIFETIME(UPalFishingComponent, IsCatchBattleFlag);
    DOREPLIFETIME(UPalFishingComponent, IsPressedFishingButton);
    DOREPLIFETIME(UPalFishingComponent, FishingFloatLocation);
    DOREPLIFETIME(UPalFishingComponent, FishingRodState);
}


