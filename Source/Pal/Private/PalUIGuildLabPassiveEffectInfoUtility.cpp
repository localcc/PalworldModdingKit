#include "PalUIGuildLabPassiveEffectInfoUtility.h"

UPalUIGuildLabPassiveEffectInfoUtility::UPalUIGuildLabPassiveEffectInfoUtility() {
}

void UPalUIGuildLabPassiveEffectInfoUtility::GetLabCategoryTypeFromResearchId(const UObject* WorldContextObject, const FName ResearchId, EPalWorkSuitability& WorkSuitability, EPalLabCategorySubType& SubType) {
}

void UPalUIGuildLabPassiveEffectInfoUtility::GetLabCategoryTypeFromEffectInfo(const FPalUIGuildLabPassiveEffectInfo& EffectInfo, EPalWorkSuitability& WorkSuitability, EPalLabCategorySubType& SubType) {
}

FText UPalUIGuildLabPassiveEffectInfoUtility::GetGuildLabPassiveEffectInfoText(const UObject* WorldContextObject, const FName ResearchId) {
    return FText::GetEmpty();
}

FPalUIGuildLabPassiveEffectInfo UPalUIGuildLabPassiveEffectInfoUtility::GetGuildLabPassiveEffectInfo(const UObject* WorldContextObject, const FName ResearchId) {
    return FPalUIGuildLabPassiveEffectInfo{};
}

FText UPalUIGuildLabPassiveEffectInfoUtility::ConvertGuildLabPassiveEffectInfoToText(const UObject* WorldContextObject, const FPalUIGuildLabPassiveEffectInfo& EffectInfo) {
    return FText::GetEmpty();
}


