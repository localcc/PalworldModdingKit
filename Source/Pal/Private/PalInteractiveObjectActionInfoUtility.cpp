#include "PalInteractiveObjectActionInfoUtility.h"

UPalInteractiveObjectActionInfoUtility::UPalInteractiveObjectActionInfoUtility() {
}

EPalInteractiveObjectIndicatorType UPalInteractiveObjectActionInfoUtility::GetIndicatorType(const FPalInteractiveObjectActionInfoSet& ActionInfo, const EPalInteractiveObjectActionType ActionType) {
    return EPalInteractiveObjectIndicatorType::None;
}

FPalInteractiveObjectActionBy UPalInteractiveObjectActionInfoUtility::CreateSituationInfo(const UObject* WorldContextObject) {
    return FPalInteractiveObjectActionBy{};
}


