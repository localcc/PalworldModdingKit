#include "PalLoadoutSelectorComponent.h"
#include "Net/UnrealNetwork.h"

UPalLoadoutSelectorComponent::UPalLoadoutSelectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DummyBallWeaponClass = NULL;
    this->primaryTargetInventoryType = EPalPlayerInventoryType::None;
    this->currentItemSlotIndex = 0;
    this->ThrowOtomoPalWeapon = NULL;
    this->spawnedWeaponsArray.AddDefaulted(4);
    this->DummyBall = NULL;
    this->replicatedPrimaryTargetInventoryType = EPalPlayerInventoryType::None;
    this->replicatedCurrentItemSlotIndex = 0;
}

void UPalLoadoutSelectorComponent::TryEquipNowSelectedWeapon_ToAll_Implementation() {
}

bool UPalLoadoutSelectorComponent::TryEquipNowSelectedWeapon() {
    return false;
}

void UPalLoadoutSelectorComponent::SetWeaponLoadoutIndex_Internal(int32 Index) {
}

void UPalLoadoutSelectorComponent::SetWeaponLoadoutIndex(int32 Index) {
}

void UPalLoadoutSelectorComponent::SetupItemContainer() {
}

void UPalLoadoutSelectorComponent::SetBallLoadoutIndex_Internal(int32 Index) {
}

void UPalLoadoutSelectorComponent::SetBallLoadoutIndex(int32 Index) {
}

void UPalLoadoutSelectorComponent::RequestChangeNowEquipBallItemID_ToServer_Implementation(FName NextBallID) {
}

void UPalLoadoutSelectorComponent::OnUpdateWeaponLoadoutSlot(UPalItemSlot* itemSlot) {
}

void UPalLoadoutSelectorComponent::OnUpdateInventorySlot(UPalItemSlot* itemSlot) {
}

void UPalLoadoutSelectorComponent::OnRep_PrimaryTargetInventoryType() {
}

void UPalLoadoutSelectorComponent::OnRep_CurrentItemSlotIndex() {
}

void UPalLoadoutSelectorComponent::OnRemoveEquipItem(EPalPlayerInventoryType inventoryType, int32 Index) {
}

void UPalLoadoutSelectorComponent::OnEquipItem(EPalPlayerInventoryType inventoryType, int32 Index) {
}

TArray<APalWeaponBase*> UPalLoadoutSelectorComponent::GetWeaponList() const {
    return TArray<APalWeaponBase*>();
}

EPalPlayerInventoryType UPalLoadoutSelectorComponent::GetPrimaryInventoryType() {
    return EPalPlayerInventoryType::Common;
}

TMap<FName, APalWeaponBase*> UPalLoadoutSelectorComponent::GetPalSphereActorMap() {
    return TMap<FName, APalWeaponBase*>();
}

void UPalLoadoutSelectorComponent::GetNowEquipedBallItemID(FName& OutBallItemID) const {
}

void UPalLoadoutSelectorComponent::CheckRespawnWeaponActor(TArray<FPalLoadoutSynchronalizedData> synchroData, TArray<APalWeaponBase*> WeaponActorList, EPalPlayerInventoryType inventoryType) {
}

void UPalLoadoutSelectorComponent::ChangeWeaponByReplicated() {
}

void UPalLoadoutSelectorComponent::ChangePrimiryInventoryType(EPalPlayerInventoryType targetInventory) {
}

void UPalLoadoutSelectorComponent::ChangePrevWeaponLoadout_Internal() {
}

void UPalLoadoutSelectorComponent::ChangePrevWeaponLoadout() {
}

void UPalLoadoutSelectorComponent::ChangePrevBallLoadout_Internal() {
}

void UPalLoadoutSelectorComponent::ChangePrevBallLoadout() {
}

void UPalLoadoutSelectorComponent::ChangeNextWeaponLoadout_Internal() {
}

void UPalLoadoutSelectorComponent::ChangeNextWeaponLoadout() {
}

void UPalLoadoutSelectorComponent::ChangeNextBallLoadout_Internal() {
}

void UPalLoadoutSelectorComponent::ChangeNextBallLoadout() {
}

void UPalLoadoutSelectorComponent::AttachSpawnOtomoPalThrowWeapon_ToServer_Implementation(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon) {
}

void UPalLoadoutSelectorComponent::AttachSpawnOtomoPalThrowWeapon_ToAll_Implementation(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon) {
}

void UPalLoadoutSelectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLoadoutSelectorComponent, NowEquipBallItemID);
    DOREPLIFETIME(UPalLoadoutSelectorComponent, replicatedPrimaryTargetInventoryType);
    DOREPLIFETIME(UPalLoadoutSelectorComponent, replicatedCurrentItemSlotIndex);
}


