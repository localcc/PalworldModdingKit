#include "PalBaseCampModuleFacilityReservation.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleFacilityReservation::UPalBaseCampModuleFacilityReservation() {
}

void UPalBaseCampModuleFacilityReservation::OnStartUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalIndividualCharacterHandle* IndividualHandle) {
}

void UPalBaseCampModuleFacilityReservation::OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleFacilityReservation::OnFinishUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampModuleFacilityReservation::OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleFacilityReservation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleFacilityReservation, FacilityCounts);
}


