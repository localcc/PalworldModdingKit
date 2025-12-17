#include "PalBuildObjectDataMap.h"

UPalBuildObjectDataMap::UPalBuildObjectDataMap() {
}

bool UPalBuildObjectDataMap::IsBlueprintItem(const FName& StaticItemId) const {
    return false;
}

FPalBuildObjectData UPalBuildObjectDataMap::GetByMapObjectId(const FName MapObjectId) const {
    return FPalBuildObjectData{};
}

FPalBuildObjectData UPalBuildObjectDataMap::GetById(const FName ID) const {
    return FPalBuildObjectData{};
}

FPalBuildObjectData UPalBuildObjectDataMap::GetByBlueprintItemId(const FName& StatiItemId) const {
    return FPalBuildObjectData{};
}

FName UPalBuildObjectDataMap::GetBuildObjectIdByBlueprintItemId(const FName& StatiItemId) const {
    return NAME_None;
}

void UPalBuildObjectDataMap::GetBuildObjectDataMapForType(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectData>& OutArray) const {
}

void UPalBuildObjectDataMap::GetBuildObjectDataArrayForUIDisplay(const EPalBuildObjectTypeA TypeA, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) const {
}

void UPalBuildObjectDataMap::GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const {
}


