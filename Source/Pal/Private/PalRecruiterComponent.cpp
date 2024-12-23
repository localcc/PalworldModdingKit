#include "PalRecruiterComponent.h"
#include "Net/UnrealNetwork.h"

UPalRecruiterComponent::UPalRecruiterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCreateRequested = false;
}

void UPalRecruiterComponent::SetupPal(int32 BaseCampLevel, const UDataTable* Table) {
}

void UPalRecruiterComponent::RecruitPal(const FGuid& RequestPlayerUId) {
}

void UPalRecruiterComponent::OnCreatedRecruitedPal(FPalInstanceID CreatedPalInstanceID) {
}

void UPalRecruiterComponent::OnCreatedDropPal(FPalInstanceID CreatedPalInstanceID) {
}

void UPalRecruiterComponent::DropPal() {
}

void UPalRecruiterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalRecruiterComponent, PalSaveParameter);
}


