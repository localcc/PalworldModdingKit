#include "PalNetworkWorkProgressComponent.h"

UPalNetworkWorkProgressComponent::UPalNetworkWorkProgressComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkWorkProgressComponent::RequestStartPlayerWork_ToServer_Implementation(const FGuid& RequestID, const FGuid& WorkProgressId) {
}

void UPalNetworkWorkProgressComponent::RequestEndPlayerWork_ToServer_Implementation(const FGuid& WorkId) {
}

void UPalNetworkWorkProgressComponent::ReceiveStartPlayerWork_ToRequestClient_Implementation(const FGuid& RequestID, const EPalWorkRequestResult Result) {
}

void UPalNetworkWorkProgressComponent::AddCompleteBuildWorkLog_Implementation(const FPalNetArchive& Archive) {
}


