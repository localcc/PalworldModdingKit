#include "PalLocationManager.h"

UPalLocationManager::UPalLocationManager() {
}

void UPalLocationManager::RemoveLocalCustomMarker(const FGuid& MarkerId) {
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

TMap<FGuid, FPalCustomMarkerSaveData> UPalLocationManager::GetCustomMarkers() const {
    return TMap<FGuid, FPalCustomMarkerSaveData>();
}

void UPalLocationManager::ChangeCustomMarkerType(const FGuid& MarkerrId, int32 Type) {
}

FGuid UPalLocationManager::AddLocalCustomMarker(FVector IconLocation, int32 IconType) {
    return FGuid{};
}


