#include "PalOilrigController.h"
#include "Net/UnrealNetwork.h"

APalOilrigController::APalOilrigController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OilrigName = EPalOilrigType::Debug;
    this->CombatEndDistance = 0.00f;
    this->CurrentShootingTower = NULL;
    this->ResetTimer = 0.00f;
    this->IsCombat = false;
}

void APalOilrigController::ResetAllSaveData_ToAll_Implementation() {
}

void APalOilrigController::RemoveShootingTower(AActor* Tower) {
}


void APalOilrigController::OnStartCombatToAll_Implementation() {
}


void APalOilrigController::OnRep_IsCombat() {
}


bool APalOilrigController::IsShootingAnyTower() {
    return false;
}

bool APalOilrigController::IsCombatMode() const {
    return false;
}

float APalOilrigController::GetResetTimer() const {
    return 0.0f;
}

APalPlayerCharacter* APalOilrigController::GetNearestFoundPlayer(APalCharacter* NPC) {
    return NULL;
}

void APalOilrigController::AddShootingTower(AActor* Tower) {
}

void APalOilrigController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalOilrigController, IsCombat);
    DOREPLIFETIME(APalOilrigController, DestroyedObjectIDs);
}


