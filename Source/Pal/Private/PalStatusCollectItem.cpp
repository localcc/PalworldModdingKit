#include "PalStatusCollectItem.h"

UPalStatusCollectItem::UPalStatusCollectItem() {
}

void UPalStatusCollectItem::TickStatus_Implementation(float DeltaTime) {
}

void UPalStatusCollectItem::SetCollectItemInfo(const FPalStaticItemIdAndNum& ItemIDAndNum) {
}

void UPalStatusCollectItem::OnEndStatus_Implementation() {
}

void UPalStatusCollectItem::OnBreakStatus_Implementation() {
}

void UPalStatusCollectItem::OnBeginStatus_Implementation() {
}

void UPalStatusCollectItem::OnBeginSomeStatus_Implementation() {
}

bool UPalStatusCollectItem::IsThrown() const {
    return false;
}

bool UPalStatusCollectItem::IsServer() const {
    return false;
}

bool UPalStatusCollectItem::IsRestrictedByWorkerEvent() const {
    return false;
}

bool UPalStatusCollectItem::IsRestrictedByWork() const {
    return false;
}

bool UPalStatusCollectItem::IsLifted() const {
    return false;
}

bool UPalStatusCollectItem::IsHealth() const {
    return false;
}

bool UPalStatusCollectItem::IsBattleMode() const {
    return false;
}

UPalPlayerInventoryData* UPalStatusCollectItem::GetOwnerPlayerInventoryData() const {
    return NULL;
}

FPalStaticItemIdAndNum UPalStatusCollectItem::GetCollectItemInfo() const {
    return FPalStaticItemIdAndNum{};
}

void UPalStatusCollectItem::DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection) {
}

bool UPalStatusCollectItem::CanSpawnItem() const {
    return false;
}


