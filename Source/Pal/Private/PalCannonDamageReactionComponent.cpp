#include "PalCannonDamageReactionComponent.h"
#include "Net/UnrealNetwork.h"

UPalCannonDamageReactionComponent::UPalCannonDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHP = 100.00f;
    this->Defense = 100.00f;
    this->Hp = 100.00f;
}



void UPalCannonDamageReactionComponent::OnRep_UpdateHP() {
}

void UPalCannonDamageReactionComponent::CreateHPHUD() {
}

void UPalCannonDamageReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCannonDamageReactionComponent, Hp);
}


