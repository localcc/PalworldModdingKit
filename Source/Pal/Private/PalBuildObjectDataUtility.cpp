#include "PalBuildObjectDataUtility.h"

UPalBuildObjectDataUtility::UPalBuildObjectDataUtility() {
}

int32 UPalBuildObjectDataUtility::ToSortPriorityTypeB(const EPalBuildObjectTypeB TypeB) {
    return 0;
}

int32 UPalBuildObjectDataUtility::ToSortPriorityTypeA(const EPalBuildObjectTypeA TypeA) {
    return 0;
}

int32 UPalBuildObjectDataUtility::ToInt(const EPalBuildObjectTypeA TypeA) {
    return 0;
}

EPalBuildObjectTypeA UPalBuildObjectDataUtility::ToBuildObjectTypeA(const int32 Value) {
    return EPalBuildObjectTypeA::Product;
}

void UPalBuildObjectDataUtility::MaterialInfos(const FPalBuildObjectData& BuildObjectData, TArray<FPalItemRecipeMaterialInfo>& NewMaterialInfos) {
}


