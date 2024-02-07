#include "PalGroupOrganization.h"
#include "Net/UnrealNetwork.h"

UPalGroupOrganization::UPalGroupOrganization() {
    this->OrganizationType = EPalOrganizationType::None;
}

void UPalGroupOrganization::OnDead(FPalDeadInfo DeadInfo) {
}

void UPalGroupOrganization::OnDamage(FPalDamageResult DamageResult) {
}

void UPalGroupOrganization::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupOrganization, OrganizationType);
    DOREPLIFETIME(UPalGroupOrganization, BaseCampIds);
}


