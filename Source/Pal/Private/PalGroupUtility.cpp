#include "PalGroupUtility.h"

EPalOrganizationType UPalGroupUtility::GetOrganizationTypeByIndividualId(const UObject* WorldContextObject, const FPalInstanceID& IndividualId) {
    return EPalOrganizationType::None;
}

EPalOrganizationType UPalGroupUtility::GetOrganizationTypeByIndividualHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* IndividualHandle) {
    return EPalOrganizationType::None;
}

UPalGroupGuildBase* UPalGroupUtility::GetLocalPlayerGuild(const UObject* WorldContextObject) {
    return NULL;
}

FGuid UPalGroupUtility::GetGroupIdByIndividualId(const UObject* WorldContextObject, const FPalInstanceID& IndividualId) {
    return FGuid{};
}

UPalGroupUtility::UPalGroupUtility() {
}

