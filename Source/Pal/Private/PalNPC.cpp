#include "PalNPC.h"

void APalNPC::OnCompletedInitParam(APalCharacter* InCharacter) {
}

APalNPC::APalNPC() {
    this->WeaponGenerator = NULL;
    this->IsEnableJumpEffect = true;
    this->DefaultVoiceID = -1;
}

