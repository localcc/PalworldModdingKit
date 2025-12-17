#include "PalUniqueSkillModule.h"

UPalUniqueSkillModule::UPalUniqueSkillModule() {
    this->InternalActionCharacter = NULL;
    this->InternalActionTarget = NULL;
}

void UPalUniqueSkillModule::TickModule_Implementation(float DeltaTime) {
}

void UPalUniqueSkillModule::SetRandomStream(const FRandomStream& InRandomStream) {
}

void UPalUniqueSkillModule::SetDynamicParameter(const FActionDynamicParameter& InDynamicParameter) {
}

void UPalUniqueSkillModule::SetActionTarget(AActor* Target) {
}

void UPalUniqueSkillModule::SetActionCharacter(APalCharacter* Character) {
}

void UPalUniqueSkillModule::OnEndModule_Implementation() {
}

void UPalUniqueSkillModule::OnBeginModule_Implementation() {
}

bool UPalUniqueSkillModule::IsPlayerControlled() const {
    return false;
}

bool UPalUniqueSkillModule::IsLocallyControlled() const {
    return false;
}

FRandomStream UPalUniqueSkillModule::GetRandomStream() const {
    return FRandomStream{};
}

FActionDynamicParameter UPalUniqueSkillModule::GetDynamicParameter() const {
    return FActionDynamicParameter{};
}

UPalAnimInstance* UPalUniqueSkillModule::GetAnimInstance() const {
    return NULL;
}

AActor* UPalUniqueSkillModule::GetActionTarget() const {
    return NULL;
}

UPalCharacterMovementComponent* UPalUniqueSkillModule::GetActionCharacterMovement() const {
    return NULL;
}

APalCharacter* UPalUniqueSkillModule::GetActionCharacter() const {
    return NULL;
}


