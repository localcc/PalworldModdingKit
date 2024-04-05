#include "PalUIWorkSuitabilitySettingModel.h"

UPalUIWorkSuitabilitySettingModel::UPalUIWorkSuitabilitySettingModel() {
}

void UPalUIWorkSuitabilitySettingModel::RequestChangeWorkSuitability(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn) {
}

void UPalUIWorkSuitabilitySettingModel::RequestChangeBaseCampBattle(const FPalInstanceID& TargetIndividualId, const bool bOn) {
}

UPalIndividualCharacterContainer* UPalUIWorkSuitabilitySettingModel::GetTargetBaseCampWorkerCharacterContainer() const {
    return NULL;
}


