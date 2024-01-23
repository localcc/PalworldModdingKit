#include "PalBodyPartsSphereComponent.h"
#include "Net/UnrealNetwork.h"

void UPalBodyPartsSphereComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsSphereComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsSphereComponent, BroadcastCollisionProfileName);
}

UPalBodyPartsSphereComponent::UPalBodyPartsSphereComponent() {
    this->BodyPartsType = EPalBodyPartsType::Normal;
}

