#include "PalFunnelSkillModuleCollectItemSearchInfo.h"

FPalFunnelSkillModuleCollectItemSearchInfo::FPalFunnelSkillModuleCollectItemSearchInfo() {
    this->Distance = 0.00f;
    this->ElapsedTime = 0.00f;
    this->bPendingPathRequest = false;
    this->NextRequestTime = 0.00f;
    this->RequestNonce = 0;
}

