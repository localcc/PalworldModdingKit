#include "PalRecruiterComponent.h"
#include "Net/UnrealNetwork.h"

UPalRecruiterComponent::UPalRecruiterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContractFee = 1;
    this->bIsCreateRequested = false;
}

void UPalRecruiterComponent::SetupPal(int32 BaseCampLevel, const UDataTable* RecruitTable, const UDataTable* AppealTable) {
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
    DOREPLIFETIME(UPalRecruiterComponent, CarreerTextId);
    DOREPLIFETIME(UPalRecruiterComponent, AppealTextIds);
    DOREPLIFETIME(UPalRecruiterComponent, ContractFee);
}


