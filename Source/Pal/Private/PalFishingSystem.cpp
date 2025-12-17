#include "PalFishingSystem.h"

UPalFishingSystem::UPalFishingSystem() {
    this->RarePalEffect = NULL;
    this->RarePassiveEffect = NULL;
    this->CatchBattleBlueprintClass = NULL;
    this->BaitItemDataTable = NULL;
    this->EnableTickRadius = 4000.00f;
    this->DisableTickAddRadius = 400.00f;
    this->QueryInterval = 0.10f;
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


