#include "PalPlayerInventoryData.h"
#include "Net/UnrealNetwork.h"
#include "PalMoneyData.h"

UPalPlayerInventoryData::UPalPlayerInventoryData() {
    this->NowItemWeight = 0.00f;
    this->maxInventoryWeight = 500.00f;
    this->maxInventoryWeight_Cached = 0.00f;
    this->InventoryMultiHelper = NULL;
    this->PassiveBuffedMaxWeight = 0.00f;
    this->moneyData = CreateDefaultSubobject<UPalMoneyData>(TEXT("moneyData"));
    this->EquipmentBreakAudioEvent = NULL;
}

bool UPalPlayerInventoryData::TryRemoveEquipment(UPalItemSlot* EquipSlot) {
    return false;
}

bool UPalPlayerInventoryData::TryGetItemSlotFromEquipmentType(EPalPlayerEquipItemSlotType equipmentSlotType, UPalItemSlot*& outSlot) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetItemIdBySlot(EPalPlayerEquipItemSlotType equipmentSlotType, FPalItemId& outItemId) {
    return false;
}

EPalPlayerEquipItemSlotType UPalPlayerInventoryData::TryGetEquipmentTypeFromStaticItemID(const FName& StaticItemId) const {
    return EPalPlayerEquipItemSlotType::Head;
}

bool UPalPlayerInventoryData::TryGetEquipmentContainerIDFromStaticItemID(const FName& StaticItemId, FPalContainerId& outContainerId) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetEmptySlot(EPalPlayerInventoryType inventoryType, UPalItemSlot*& emptySlot) {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerIdFromItemType(EPalItemTypeA itemTypeA, FPalContainerId& outContainerId) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerIDFromInventoryType(const EPalPlayerInventoryType inventoryType, FPalContainerId& outContainerId) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerFromStaticItemID(const FName& StaticItemId, UPalItemContainer*& OutContainer) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerFromInventoryType(const EPalPlayerInventoryType inventoryType, UPalItemContainer*& OutContainer) const {
    return false;
}

bool UPalPlayerInventoryData::TryEquipSlot(UPalItemSlot* Slot) {
    return false;
}

void UPalPlayerInventoryData::RequestTrashItemFromDropSlot_ServerInternal() {
}

void UPalPlayerInventoryData::RequestTrashItemFromDropSlot() {
}

void UPalPlayerInventoryData::RequestSortInventory_ServerInternal() {
}

void UPalPlayerInventoryData::RequestSortInventory() {
}

void UPalPlayerInventoryData::RequestFillSlotToTargetContainerFromInventory_ToServer_Implementation(const FPalContainerId& ToContainerId) {
}

void UPalPlayerInventoryData::RequestFillSlotToInventoryFromTargetContainer_ToServer_Implementation(const FPalContainerId& FromContainerId) {
}

void UPalPlayerInventoryData::RequestDropItemFromDropSlot_ServerInternal() {
}

void UPalPlayerInventoryData::RequestDropItemFromDropSlot() {
}

void UPalPlayerInventoryData::RequestAddItem(const FName StaticItemId, const int32 Count, bool isAssignPassive) {
}

void UPalPlayerInventoryData::OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalPlayerInventoryData::OnUpdateLoadoutSlot(UPalItemSlot* Slot) {
}

void UPalPlayerInventoryData::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalPlayerInventoryData::OnUpdateEssentialContainer(UPalItemContainer* Container) {
}

void UPalPlayerInventoryData::OnUpdateEquipmentSlot_ForServer(UPalItemSlot* Slot) {
}

void UPalPlayerInventoryData::OnUpdateEquipmentSlot(UPalItemSlot* Slot) {
}

void UPalPlayerInventoryData::OnUpdateAnyEquipmentDurability(float OldDurability, float NewDurability) {
}

void UPalPlayerInventoryData::OnRep_maxInventoryWeight() {
}

void UPalPlayerInventoryData::OnRep_InventoryInfo() {
}

void UPalPlayerInventoryData::OnRep_BuffMaxWeight() {
}

void UPalPlayerInventoryData::OnOnUpdateStatusPoint(FName StatusName, int32 prevPoint, int32 newPoint) {
}

void UPalPlayerInventoryData::OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType) {
}

bool UPalPlayerInventoryData::IsExistItem(const FName& StaticItemId) const {
    return false;
}

bool UPalPlayerInventoryData::IsEquipSlot(UPalItemSlot* CheckSlot) {
    return false;
}

bool UPalPlayerInventoryData::IsEquip(EPalPlayerEquipItemSlotType equipmentSlotType, const FName& StaticItemId) const {
    return false;
}

int32 UPalPlayerInventoryData::GetUnlockedFoodEquipSlotNum() const {
    return 0;
}

float UPalPlayerInventoryData::GetNowItemWeight() const {
    return 0.0f;
}

void UPalPlayerInventoryData::GetItemInfoByItemTypeA(TArray<EPalItemTypeA> itemTypeA, TArray<FPalItemAndNum>& OutItemInfos) {
}

EPalPlayerInventoryType UPalPlayerInventoryData::GetInventoryTypeFromStaticItemID(const FName& StaticItemId) const {
    return EPalPlayerInventoryType::Common;
}

EPalPlayerInventoryType UPalPlayerInventoryData::GetInventoryTypeFromItemTypeA(const EPalItemTypeA itemTypeA) const {
    return EPalPlayerInventoryType::Common;
}

int32 UPalPlayerInventoryData::CountItemNum(const FName& StaticItemId) const {
    return 0;
}

bool UPalPlayerInventoryData::CanEquip(EPalPlayerEquipItemSlotType equipmentSlotType, const FName& StaticItemId) const {
    return false;
}

bool UPalPlayerInventoryData::CanCheckPalTalentsByInventoryItem() {
    return false;
}

EPalItemOperationResult UPalPlayerInventoryData::AddItem_ServerInternal(const FName StaticItemId, const int32 Count, bool isAssignPassive) {
    return EPalItemOperationResult::Success;
}

void UPalPlayerInventoryData::AddFullInventoryLog_Client() {
}

void UPalPlayerInventoryData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerInventoryData, inventoryInfo);
    DOREPLIFETIME(UPalPlayerInventoryData, maxInventoryWeight);
    DOREPLIFETIME(UPalPlayerInventoryData, InventoryMultiHelper);
    DOREPLIFETIME(UPalPlayerInventoryData, PassiveBuffedMaxWeight);
    DOREPLIFETIME(UPalPlayerInventoryData, OwnerPlayerUId);
}


