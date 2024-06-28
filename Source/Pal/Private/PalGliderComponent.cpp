#include "PalGliderComponent.h"
#include "Net/UnrealNetwork.h"

UPalGliderComponent::UPalGliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentGlider = NULL;
    this->CurrentGliderClass = NULL;
    this->bIsGliding = false;
}

UPalIndividualCharacterHandle* UPalGliderComponent::TryGetGliderIndividualHandleFromOtomoHolder() const {
    return NULL;
}

void UPalGliderComponent::StopGliderSound(const FPalDataTableRowName_SoundID& ID) {
}

void UPalGliderComponent::StartGliding_ToServer_Implementation() {
}

void UPalGliderComponent::StartGliding() {
}

void UPalGliderComponent::SetCurrentGliderSoftClass_ToServer_Implementation(const TSoftClassPtr<APalGliderObject>& gliderSoftClass) {
}

void UPalGliderComponent::SetCurrentGliderPalID_ToServer_Implementation(const FName& PalID) {
}

void UPalGliderComponent::RequestCheckAndUpdateCurrentGlider_ToAll_Implementation() {
}

void UPalGliderComponent::PlayGliderSound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option) {
}

void UPalGliderComponent::OnUpdateOtomoHolderSlot(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle) {
}

void UPalGliderComponent::OnUpdateOtomoHolderInitialized(APalCharacter* Character) {
}

void UPalGliderComponent::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalGliderComponent::OnUpdateIndividualActor(UPalIndividualCharacterHandle* Handle) {
}

void UPalGliderComponent::OnUpdateEquipmentSlot(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType) {
}


void UPalGliderComponent::OnRevivedIndividual(UPalIndividualCharacterParameter* InParameter) {
}

void UPalGliderComponent::OnRep_IsGliding() {
}

void UPalGliderComponent::OnRep_CurrentGliderSoftClass() {
}

void UPalGliderComponent::OnRep_CurrentGliderPalID() {
}



void UPalGliderComponent::OnDeadGliderPal(FPalDeadInfo DeadInfo) {
}

void UPalGliderComponent::OnCompleteOwnerInitialize() {
}

void UPalGliderComponent::OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}


bool UPalGliderComponent::IsGliding() const {
    return false;
}

bool UPalGliderComponent::IsEquipGlider() const {
    return false;
}

bool UPalGliderComponent::HasGliderPal() const {
    return false;
}

TArray<FName> UPalGliderComponent::GetAllGliderPalNames() const {
    return TArray<FName>();
}

void UPalGliderComponent::EndGliding_ToServer_Implementation() {
}

void UPalGliderComponent::EndGliding() {
}

bool UPalGliderComponent::CanGliding() const {
    return false;
}

bool UPalGliderComponent::CanEndGliding() const {
    return false;
}

void UPalGliderComponent::CancelGliding() {
}

void UPalGliderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGliderComponent, CurrentGliderPalID);
    DOREPLIFETIME(UPalGliderComponent, CurrentGliderSoftClass);
    DOREPLIFETIME(UPalGliderComponent, bIsGliding);
}


