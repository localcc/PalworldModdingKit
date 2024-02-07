#include "PalBodyPartsBoxComponent.h"
#include "Net/UnrealNetwork.h"

UPalBodyPartsBoxComponent::UPalBodyPartsBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bDynamicObstacle = true;
    this->BodyPartsType = EPalBodyPartsType::Normal;
}

void UPalBodyPartsBoxComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsBoxComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsBoxComponent, BroadcastCollisionProfileName);
}


