#include "PalDungeonWorldSubsystem.h"

UPalDungeonWorldSubsystem::UPalDungeonWorldSubsystem() {
    this->PrerequisiteWorldSubsystemList.AddDefaulted(1);
    this->TickInterval = 0.00f;
    this->bInitializedWithSaveData = false;
}

bool UPalDungeonWorldSubsystem::TryGetDungeonInfo(const FPalStageInstanceId& StageInstanceId, FPalDungeonInfoParameter& OutInfo) const {
    return false;
}

FGuid UPalDungeonWorldSubsystem::Debug_GetDungeonInstanceIdByIndex(const int32 Index) const {
    return FGuid{};
}


