#include "PalLocationManager.h"

UPalLocationManager::UPalLocationManager() {
}

void UPalLocationManager::RemoveLocalCustomLocation(const FGuid& LocationId) {
}

UPalLocationPoint* UPalLocationManager::GetLocationPoint(const FGuid& ID) const {
    return NULL;
}

TMap<FGuid, UPalLocationBase*> UPalLocationManager::GetLocationMap() const {
    return TMap<FGuid, UPalLocationBase*>();
}

UPalLocationBase* UPalLocationManager::GetLocation(const FGuid& ID) const {
    return NULL;
}

int32 UPalLocationManager::GetLocalCustomLocationCount() {
    return 0;
}

FGuid UPalLocationManager::AddLocalCustomLocation(FVector IconLocation, int32 IconType) {
    return FGuid{};
}


