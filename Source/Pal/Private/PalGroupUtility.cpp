#include "PalGroupUtility.h"

UPalGroupUtility::UPalGroupUtility() {
}

bool UPalGroupUtility::IsEnemyOrganization(EPalOrganizationType OrganizationType) {
    return false;
}

EPalOrganizationType UPalGroupUtility::GetOrganizationTypeByIndividualId(const UObject* WorldContextObject, const FPalInstanceID& IndividualId) {
    return EPalOrganizationType::None;
}

EPalOrganizationType UPalGroupUtility::GetOrganizationTypeByIndividualHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* IndividualHandle) {
    return EPalOrganizationType::None;
}

UPalGroupGuildBase* UPalGroupUtility::GetLocalPlayerGuild(const UObject* WorldContextObject) {
    return NULL;
}


