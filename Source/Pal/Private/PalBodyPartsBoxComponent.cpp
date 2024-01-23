#include "PalBodyPartsBoxComponent.h"
#include "Net/UnrealNetwork.h"

void UPalBodyPartsBoxComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsBoxComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsBoxComponent, BroadcastCollisionProfileName);
}

UPalBodyPartsBoxComponent::UPalBodyPartsBoxComponent() {
    this->BodyPartsType = EPalBodyPartsType::Normal;
}

