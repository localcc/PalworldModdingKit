#include "PalIncidentList.h"


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

UPalIncidentList::UPalIncidentList() {
    this->CurrentIncident = NULL;
    this->ProgressCount = 0;
}

