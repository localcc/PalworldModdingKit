#include "PalUniqueSkillModule.h"

UPalUniqueSkillModule::UPalUniqueSkillModule() {
    this->ActionCharacter = NULL;
    this->ActionTarget = NULL;
}

void UPalUniqueSkillModule::TickModule_Implementation(float DeltaTime) {
}

void UPalUniqueSkillModule::SetActionTarget(AActor* Target) {
}

void UPalUniqueSkillModule::SetActionCharacter(APalCharacter* Character) {
}

void UPalUniqueSkillModule::OnEndModule_Implementation() {
}

void UPalUniqueSkillModule::OnBeginModule_Implementation() {
}

AActor* UPalUniqueSkillModule::GetActionTarget() const {
    return NULL;
}

APalCharacter* UPalUniqueSkillModule::GetActionCharacter() const {
    return NULL;
}


