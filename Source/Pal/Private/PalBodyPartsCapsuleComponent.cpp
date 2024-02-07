#include "PalBodyPartsCapsuleComponent.h"
#include "Net/UnrealNetwork.h"

UPalBodyPartsCapsuleComponent::UPalBodyPartsCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bDynamicObstacle = true;
    this->BodyPartsType = EPalBodyPartsType::Normal;
}

void UPalBodyPartsCapsuleComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsCapsuleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsCapsuleComponent, BroadcastCollisionProfileName);
}


