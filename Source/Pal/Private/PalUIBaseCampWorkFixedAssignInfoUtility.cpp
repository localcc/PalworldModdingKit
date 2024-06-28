#include "PalUIBaseCampWorkFixedAssignInfoUtility.h"

UPalUIBaseCampWorkFixedAssignInfoUtility::UPalUIBaseCampWorkFixedAssignInfoUtility() {
}

EPalWorkType UPalUIBaseCampWorkFixedAssignInfoUtility::GetWorkType(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return EPalWorkType::None;
}

TArray<EPalWorkSuitability> UPalUIBaseCampWorkFixedAssignInfoUtility::GetWorkSuitability(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return TArray<EPalWorkSuitability>();
}

UPalWorkProgress* UPalUIBaseCampWorkFixedAssignInfoUtility::GetWorkProgress(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return NULL;
}

UPalWorkBase* UPalUIBaseCampWorkFixedAssignInfoUtility::GetWorkBase(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return NULL;
}

UPalMapObjectConcreteModelBase* UPalUIBaseCampWorkFixedAssignInfoUtility::GetOwnerMapObjectConcreteModel(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return NULL;
}

int32 UPalUIBaseCampWorkFixedAssignInfoUtility::GetAssignableNum(const FPalUIBaseCampWorkFixedAssignInfo& Info) {
    return 0;
}


