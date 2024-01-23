#include "PalBodyPartsCapsuleComponent.h"
#include "Net/UnrealNetwork.h"

void UPalBodyPartsCapsuleComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsCapsuleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsCapsuleComponent, BroadcastCollisionProfileName);
}

UPalBodyPartsCapsuleComponent::UPalBodyPartsCapsuleComponent() {
    this->BodyPartsType = EPalBodyPartsType::Normal;
}

