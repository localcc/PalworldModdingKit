#include "PalPlayerInventoryData.h"
#include "Net/UnrealNetwork.h"
#include "PalMoneyData.h"

UPalPlayerInventoryData::UPalPlayerInventoryData() {
    this->NowItemWeight = 0.00f;
    this->MaxInventoryWeight = 500.00f;
    this->MaxInventoryWeight_Cached = 0.00f;
    this->InventoryMultiHelper = NULL;
    this->PassiveBuffedMaxWeight = 0.00f;
    this->PassiveBuffedCurrentWeight = 0.00f;
    this->MyMoneyData = CreateDefaultSubobject<UPalMoneyData>(TEXT("MoneyData"));
    this->EquipmentBreakAudioEvent = NULL;
}

bool UPalPlayerInventoryData::TryRemoveEquipment(UPalItemSlot* EquipSlot) {
    return false;
}

bool UPalPlayerInventoryData::TryGetItemSlotFromEquipmentType(EPalPlayerEquipItemSlotType EquipmentSlotType, UPalItemSlot*& OutSlot) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetItemIdBySlot(EPalPlayerEquipItemSlotType EquipmentSlotType, FPalItemId& OutItemId) {
    return false;
}

EPalPlayerEquipItemSlotType UPalPlayerInventoryData::TryGetEquipmentTypeFromStaticItemID(const FName& StaticItemId) const {
    return EPalPlayerEquipItemSlotType::Head;
}

bool UPalPlayerInventoryData::TryGetEquipmentContainerIDFromStaticItemID(const FName& StaticItemId, FPalContainerId& OutContainerId) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetEmptySlot(EPalPlayerInventoryType inventoryType, UPalItemSlot*& EmptySlot) {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerIdFromItemType(EPalItemTypeA ItemTypeA, FPalContainerId& OutContainerId) const {
    return false;
}

bool UPalPlayerInventoryData::TryGetContainerIDFromInventoryType(const EPalPlayerInventoryType inventoryType, FPalContainerId& OutContainerId) const {
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

void UPalPlayerInventoryData::RequestSortInventory_ServerInternal() {
}

void UPalPlayerInventoryData::RequestSortInventory() {
}

void UPalPlayerInventoryData::RequestFillSlotToTargetContainerFromInventory_ToServer_Implementation(const FPalContainerId& ToContainerId) {
}

void UPalPlayerInventoryData::RequestFillSlotToInventoryFromTargetContainer_ToServer_Implementation(const FPalContainerId& FromContainerId) {
}

void UPalPlayerInventoryData::RequestAddItem(const FName StaticItemId, const int32 Count, bool IsAssignPassive) {
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

void UPalPlayerInventoryData::OnRep_BuffCurrentWeight() {
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

bool UPalPlayerInventoryData::IsEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const {
    return false;
}

bool UPalPlayerInventoryData::IsAlreadyEquipedAccessory(const FName& AccessoryItemId) const {
    return false;
}

bool UPalPlayerInventoryData::IsAccessorySlot(UPalItemSlot*& Slot) {
    return false;
}

int32 UPalPlayerInventoryData::GetUnlockedFoodEquipSlotNum() const {
    return 0;
}

int32 UPalPlayerInventoryData::GetUnlockedAccessorySlotNum() const {
    return 0;
}

float UPalPlayerInventoryData::GetPassiveBuffedItemWeight(const UPalStaticItemDataBase* Item) {
    return 0.0f;
}

float UPalPlayerInventoryData::GetNowItemWeight() const {
    return 0.0f;
}

float UPalPlayerInventoryData::GetMaxItemWeight() const {
    return 0.0f;
}

void UPalPlayerInventoryData::GetItemInfoByItemTypeA(TArray<EPalItemTypeA> ItemTypeA, TArray<FPalItemAndNum>& OutItemInfos) {
}

EPalPlayerInventoryType UPalPlayerInventoryData::GetInventoryTypeFromStaticItemID(const FName& StaticItemId) const {
    return EPalPlayerInventoryType::Common;
}

EPalPlayerInventoryType UPalPlayerInventoryData::GetInventoryTypeFromItemTypeA(const EPalItemTypeA ItemTypeA) const {
    return EPalPlayerInventoryType::Common;
}

int32 UPalPlayerInventoryData::CountItemNum(const FName& StaticItemId) const {
    return 0;
}

bool UPalPlayerInventoryData::CanEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const {
    return false;
}

bool UPalPlayerInventoryData::CanCheckPalTalentsByInventoryItem() {
    return false;
}

EPalItemOperationResult UPalPlayerInventoryData::AddItem_ServerInternal(const FName StaticItemId, const int32 Count, bool IsAssignPassive) {
    return EPalItemOperationResult::Success;
}

void UPalPlayerInventoryData::AddFullInventoryLog_Client() {
}

void UPalPlayerInventoryData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerInventoryData, MyInventoryInfo);
    DOREPLIFETIME(UPalPlayerInventoryData, MaxInventoryWeight);
    DOREPLIFETIME(UPalPlayerInventoryData, InventoryMultiHelper);
    DOREPLIFETIME(UPalPlayerInventoryData, PassiveBuffedMaxWeight);
    DOREPLIFETIME(UPalPlayerInventoryData, PassiveBuffedCurrentWeight);
    DOREPLIFETIME(UPalPlayerInventoryData, OwnerPlayerUId);
}


