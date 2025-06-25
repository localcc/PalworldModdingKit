#include "PalFishShadow.h"

APalFishShadow::APalFishShadow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



void APalFishShadow::OnReachedPickLocation() {
}




float APalFishShadow::GetMoveSpeedPerSec() const {
    return 0.0f;
}

float APalFishShadow::GetFishShadowSizeScale() const {
    return 0.0f;
}

EPalFishBattleBehaviorType APalFishShadow::GetBehaviorType() const {
    return EPalFishBattleBehaviorType::Normal;
}


