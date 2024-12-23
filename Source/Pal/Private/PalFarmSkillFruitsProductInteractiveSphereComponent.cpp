#include "PalFarmSkillFruitsProductInteractiveSphereComponent.h"
#include "Net/UnrealNetwork.h"

UPalFarmSkillFruitsProductInteractiveSphereComponent::UPalFarmSkillFruitsProductInteractiveSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProductIndex = 0;
}

void UPalFarmSkillFruitsProductInteractiveSphereComponent::OnTriggeringInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalFarmSkillFruitsProductInteractiveSphereComponent::OnRep_StaticItemId() {
}

void UPalFarmSkillFruitsProductInteractiveSphereComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFarmSkillFruitsProductInteractiveSphereComponent, StaticItemId);
}


