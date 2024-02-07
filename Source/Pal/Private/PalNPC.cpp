#include "PalNPC.h"

APalNPC::APalNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponGenerator = NULL;
    this->IsEnableJumpEffect = true;
    this->DefaultVoiceID = -1;
}

