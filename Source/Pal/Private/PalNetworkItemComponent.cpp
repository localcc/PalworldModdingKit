#include "PalNetworkItemComponent.h"

UPalNetworkItemComponent::UPalNetworkItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkItemComponent::RequestSwap_ToServer_Implementation(const FGuid& RequestID, const FPalItemAndSlot& SlotA, const FPalItemPermission& APermission, const FPalItemAndSlot& SlotB, const FPalItemPermission& BPermission) {
}

void UPalNetworkItemComponent::RequestProduceWithSlot_ToServer_Implementation(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalItemAndSlot& To, const FPalNetArchive& CreateParamArchive) {
}

void UPalNetworkItemComponent::RequestProduce_ToServer_Implementation(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalContainerId& ContainerId, const FPalNetArchive& CreateParamArchive) {
}

void UPalNetworkItemComponent::RequestMoveToContainer_ToServer_Implementation(const FGuid& RequestID, const FPalItemId& ItemId, const FPalContainerId& ToContainerId, const FPalItemPermission& ToPermission, const TArray<FPalSlotItemAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestMove_ToServer_Implementation(const FGuid& RequestID, const FPalItemId& ItemId, const FPalItemAndSlot& To, const FPalItemPermission& ToPermission, const TArray<FPalSlotItemAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestDrop_ToServer_Implementation(const TArray<FPalItemSlotIdAndNum>& DropSlotAndNumArray, const FVector& DropLocation, bool IsAutoPickup) {
}

void UPalNetworkItemComponent::RequestDispose_ToServer_Implementation(const FGuid& RequestID, const FPalSlotItemAndNum& SlotInfo) {
}

void UPalNetworkItemComponent::ReceiveProduceWithSlotResult_ToRequestClient_Implementation(const FGuid& RequestID, const EPalItemOperationResult Result) {
}

void UPalNetworkItemComponent::ReceiveProduceResult_ToRequestClient_Implementation(const FGuid& RequestID, const EPalItemOperationResult Result) {
}


