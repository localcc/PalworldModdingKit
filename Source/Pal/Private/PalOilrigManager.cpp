#include "PalOilrigManager.h"

UPalOilrigManager::UPalOilrigManager() {
    this->ClearedOilrigResetTimeSecond = 600.00f;
    this->MachineStartTimeSecond_ByAlarm = 180.00f;
    this->ClearCountUpDistance = 30000.00f;
}

void UPalOilrigManager::OnEndPlayNPC(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

APalOilrigController* UPalOilrigManager::FindOilrigController(EPalOilrigType KeyName) {
    return NULL;
}

APalOilrigController* UPalOilrigManager::FindNearestOilrigController(FVector Location) {
    return NULL;
}

EPalOilrigCombatHeliWeaponType UPalOilrigManager::FindCombatHeliRandomWeza(TArray<FPalOilrigCombatHeliRandomWeaponInfo> InfoList) {
    return EPalOilrigCombatHeliWeaponType::MachineGun;
}

AActor* UPalOilrigManager::FindCombatHeliAimTarget(APalCharacter* HeliActor, float Range, FVector OilrigCenter) {
    return NULL;
}

void UPalOilrigManager::AddNPCToGroup(UPalIndividualCharacterHandle* Handle) {
}


