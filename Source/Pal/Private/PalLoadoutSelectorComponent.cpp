#include "PalLoadoutSelectorComponent.h"
#include "Net/UnrealNetwork.h"

UPalLoadoutSelectorComponent::UPalLoadoutSelectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DummyBallWeaponClass = NULL;
    this->primaryTargetInventoryType = EPalPlayerInventoryType::None;
    this->currentItemSlotIndex = 0;
    this->ThrowOtomoPalWeapon = NULL;
    this->spawnedWeaponsArray.AddDefaulted(4);
    this->DummyBall = NULL;
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

void UPalLoadoutSelectorComponent::OnRemoveEquipItem_ByTransmitter_Implementation() {
}

void UPalLoadoutSelectorComponent::OnRemoveEquipItem(EPalPlayerInventoryType inventoryType, int32 Index) {
}

void UPalLoadoutSelectorComponent::OnEquipItem_ByTransmitter_Implementation(EPalPlayerInventoryType inventoryType, int32 Index) {
}

void UPalLoadoutSelectorComponent::OnEquipItem(EPalPlayerInventoryType inventoryType, int32 Index) {
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
}


