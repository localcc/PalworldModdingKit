#include "PalIncidentNotifyListener.h"

UPalIncidentNotifyListener::UPalIncidentNotifyListener() {
    this->FilterOccuredObject = NULL;
    this->FilterOwnerObject = NULL;
}

void UPalIncidentNotifyListener::UnregisterFromIncidentSystem() {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterOwner(UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterOccuredOwner(UObject* FilterOccured, UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterOccured(UObject* FilterOccured) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdsOwner(const TArray<FName>& FilterIds, UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdsOccuredOwner(const TArray<FName>& FilterIds, UObject* FilterOccured, UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdsOccured(const TArray<FName>& FilterIds, UObject* FilterOccured) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIds(const TArray<FName>& FilterIds) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdOwner(FName FilterId, UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdOccuredOwner(FName FilterId, UObject* FilterOccured, UObject* FilterOwner) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterIdOccured(FName FilterId, UObject* FilterOccured) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystemWithFilterId(FName FilterId) {
}

void UPalIncidentNotifyListener::RegisterToIncidentSystem() {
}



