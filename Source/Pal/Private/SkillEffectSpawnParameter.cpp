#include "SkillEffectSpawnParameter.h"

FSkillEffectSpawnParameter::FSkillEffectSpawnParameter() {
    this->TimeOffset = 0.00f;
    this->SkillEffectClass = NULL;
    this->bAttachToOwner = false;
    this->AttachLocationType = EPalBodyLocationType::None;
}

