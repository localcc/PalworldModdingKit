#include "PalNetworkItemComponent.h"

UPalNetworkItemComponent::UPalNetworkItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkItemComponent::RequestSwap_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotId& SlotA, const FPalItemSlotId& SlotB) {
}

void UPalNetworkItemComponent::RequestMoveToContainer_ToServer_Implementation(const FGuid& RequestID, const FPalContainerId& ToContainerId, const TArray<FPalItemSlotIdAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestMove_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotId& To, const TArray<FPalItemSlotIdAndNum>& Froms) {
}

void UPalNetworkItemComponent::RequestDrop_ToServer_Implementation(const TArray<FPalItemSlotIdAndNum>& DropSlotAndNumArray, const FVector& DropLocation, bool IsAutoPickup) {
}

void UPalNetworkItemComponent::RequestDispose_ToServer_Implementation(const FGuid& RequestID, const FPalItemSlotIdAndNum& SlotInfo) {
}


