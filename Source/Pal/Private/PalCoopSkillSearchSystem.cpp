#include "PalCoopSkillSearchSystem.h"
#include "Templates/SubclassOf.h"

void UPalCoopSkillSearchSystem::StartSearchEffect(const FPalCoopSkillSearchEffectParameter& EffectParam) {
}

UPalCoopSkillSearchBase* UPalCoopSkillSearchSystem::CreateSearchObject(TSubclassOf<UPalCoopSkillSearchBase> SearchClass) {
    return NULL;
}

UPalCoopSkillSearchSystem::UPalCoopSkillSearchSystem() {
    this->EffectControllerClass = NULL;
    this->LocationRegister = NULL;
    this->EffectController = NULL;
}

