#include "PalNetworkItemComponent.h"

UPalNetworkItemComponent::UPalNetworkItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkItemComponent::RequestSwap_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotId& SlotA, const FPalItemSlotId& SlotB) {
}

void UPalNetworkItemComponent::RequestProduceWithSlot_ToServer_Implementation(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalItemAndSlot& To, const FPalNetArchive& CreateParamArchive) {
}

void UPalNetworkItemComponent::RequestProduce_ToServer_Implementation(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalContainerId& ContainerId, const FPalNetArchive& CreateParamArchive) {
}

void UPalNetworkItemComponent::RequestMoveToContainer_ToServer_Implementation(const FGuid& RequestID, const FPalContainerId& ToContainerId, const TArray<FPalItemSlotIdAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestMove_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotId& To, const TArray<FPalItemSlotIdAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestDrop_ToServer_Implementation(const TArray<FPalItemSlotIdAndNum>& DropSlotAndNumArray, const FVector& DropLocation, bool IsAutoPickup) {
}

void UPalNetworkItemComponent::RequestDispose_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotIdAndNum& SlotInfo) {
}

void UPalNetworkItemComponent::ReceiveProduceWithSlotResult_ToRequestClient_Implementation(const FGuid& RequestID, const EPalItemOperationResult Result) {
}

void UPalNetworkItemComponent::ReceiveProduceResult_ToRequestClient_Implementation(const FGuid& RequestID, const EPalItemOperationResult Result) {
}


