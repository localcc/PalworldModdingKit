#include "PalBuildObjectDataMap.h"

UPalBuildObjectDataMap::UPalBuildObjectDataMap() {
}

FPalBuildObjectData UPalBuildObjectDataMap::GetByMapObjectId(const FName MapObjectId) const {
    return FPalBuildObjectData{};
}

FPalBuildObjectData UPalBuildObjectDataMap::GetById(const FName ID) const {
    return FPalBuildObjectData{};
}

void UPalBuildObjectDataMap::GetBuildObjectDataMapForType(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectData>& OutArray) const {
}

void UPalBuildObjectDataMap::GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const {
}


