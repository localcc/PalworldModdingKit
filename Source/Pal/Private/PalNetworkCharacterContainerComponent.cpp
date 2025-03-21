#include "PalNetworkCharacterContainerComponent.h"

UPalNetworkCharacterContainerComponent::UPalNetworkCharacterContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkCharacterContainerComponent::RequestUnlockSlot_ToServer_Implementation(const FGuid& RequestID, const FPalCharacterSlotId& SlotId) {
}

void UPalNetworkCharacterContainerComponent::RequestSwap_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB) {
}

void UPalNetworkCharacterContainerComponent::RequestSortContainer_ToServer_Implementation(const FPalContainerId& ContainerId, const FPalCharacterContainerSortInfo& SortInfo) {
}

void UPalNetworkCharacterContainerComponent::RequestMoveToPalBox_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotId, const FPalContainerId& ContainerId, const int32 CurrentPage) {
}

void UPalNetworkCharacterContainerComponent::RequestMove_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotId, const FPalContainerId& ContainerId) {
}

void UPalNetworkCharacterContainerComponent::RequestEmptySlot_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotId) {
}

void UPalNetworkCharacterContainerComponent::RecieveUnlockSlot_ToRequestClient_Implementation(const FGuid& RequestID, const EPalCharacterContainerOperationResult Result) {
}

void UPalNetworkCharacterContainerComponent::RecieveUnlockSlot_ToClient_Implementation(const FPalCharacterSlotId& SlotId) {
}


