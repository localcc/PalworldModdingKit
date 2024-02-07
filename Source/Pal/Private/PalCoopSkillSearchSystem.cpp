#include "PalCoopSkillSearchSystem.h"
#include "Templates/SubclassOf.h"

UPalCoopSkillSearchSystem::UPalCoopSkillSearchSystem() {
    this->EffectControllerClass = NULL;
    this->LocationRegister = NULL;
    this->EffectController = NULL;
}

void UPalCoopSkillSearchSystem::StartSearchEffect(const FPalCoopSkillSearchEffectParameter& EffectParam) {
}

UPalCoopSkillSearchBase* UPalCoopSkillSearchSystem::CreateSearchObject(TSubclassOf<UPalCoopSkillSearchBase> SearchClass) {
    return NULL;
}


