#include "PalFishingSystem.h"

UPalFishingSystem::UPalFishingSystem() {
    this->RarePalEffect = NULL;
    this->RarePassiveEffect = NULL;
    this->CatchBattleBlueprintClass = NULL;
    this->BaitItemDataTable = NULL;
}



float UPalFishingSystem::GetFishShadowSizeScale(EPalFishShadowSizeType SizeType) const {
    return 0.0f;
}

EPalFishingPlayerMotionType UPalFishingSystem::GetFishingPlayerMotionType(const EPalSizeType SizeType) {
    return EPalFishingPlayerMotionType::None;
}

UPalFishingCatchBattle* UPalFishingSystem::GetCatchBattle(const FGuid& PlayerUId) const {
    return NULL;
}


