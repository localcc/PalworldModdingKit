#include "PalUIGuildLabModel.h"

UPalUIGuildLabModel::UPalUIGuildLabModel() {
}

void UPalUIGuildLabModel::RequestStartResearch(const FName ResearchId) {
}

void UPalUIGuildLabModel::RequestCancelResearch(const FName ResearchId) {
}

void UPalUIGuildLabModel::RequestCancelCurrentResearch() {
}

void UPalUIGuildLabModel::GetTargetWorkSuitabilities(TArray<EPalWorkSuitability>& OutArray) const {
}

void UPalUIGuildLabModel::GetResearchInfoByWorkSuitability(const EPalWorkSuitability WorkSuitability, TArray<FPalUIGuildLabResearchInfo>& OutResearchInfo) const {
}

FPalUIGuildLabResearchInfo UPalUIGuildLabModel::GetResearchInfo(const FName ResearchId) const {
    return FPalUIGuildLabResearchInfo{};
}

void UPalUIGuildLabModel::GetCurrentResearchState(float& OutWorkAmount, float& OutRequiredWorkAmount, bool& bCompleted) const {
}

FName UPalUIGuildLabModel::GetCurrentProgressingResearchID() const {
    return NAME_None;
}

void UPalUIGuildLabModel::CollectCurrentLabResearchEffectInfo(const EPalWorkSuitability TargetWorkSuitability, TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const {
}

void UPalUIGuildLabModel::CollectCurrentLabResearchAllEffectInfo(TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const {
}


