#include "PalVisitorFormationMoveModule.h"

UPalVisitorFormationMoveModule::UPalVisitorFormationMoveModule() {
    this->AIController = NULL;
    this->LeaderCharacter = NULL;
}

void UPalVisitorFormationMoveModule::TickModule(float DeltaTime) {
}

void UPalVisitorFormationMoveModule::SetLeaderGoalArrived(bool bIsArrived) {
}

void UPalVisitorFormationMoveModule::Initialize(const FPalVisitorFormationMoveInitParameter& Parameter) {
}

FVector UPalVisitorFormationMoveModule::GetMoveLocation() const {
    return FVector{};
}


