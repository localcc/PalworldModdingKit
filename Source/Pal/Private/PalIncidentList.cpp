#include "PalIncidentList.h"

UPalIncidentList::UPalIncidentList() {
    this->CurrentIncident = NULL;
    this->ProgressCount = 0;
}


void UPalIncidentList::OnAllIncidentsCompleted_Implementation() {
}

void UPalIncidentList::InsertIncidentToTop(const FName& ID) {
}

void UPalIncidentList::InsertIncidentsToTop(const TArray<FName>& IDs) {
}

void UPalIncidentList::AddIncidents(const TArray<FName>& IDs) {
}

void UPalIncidentList::AddIncident(const FName& ID) {
}


