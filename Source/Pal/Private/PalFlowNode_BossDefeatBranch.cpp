#include "PalFlowNode_BossDefeatBranch.h"

UPalFlowNode_BossDefeatBranch::UPalFlowNode_BossDefeatBranch() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BossType = EPalBossType::None;
    this->CheckDifficulty = EPalBossBattleDifficulty::Normal;
}

bool UPalFlowNode_BossDefeatBranch::IsDefeated() const {
    return false;
}


