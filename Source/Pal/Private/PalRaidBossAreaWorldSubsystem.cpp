#include "PalRaidBossAreaWorldSubsystem.h"

UPalRaidBossAreaWorldSubsystem::UPalRaidBossAreaWorldSubsystem() {
    this->TickInterval = 0.00f;
}

void UPalRaidBossAreaWorldSubsystem::RequestSurrenderRaidBossArea() {
}

void UPalRaidBossAreaWorldSubsystem::OnSetupLocalPlayer(APalPlayerState* PlayerState) {
}

void UPalRaidBossAreaWorldSubsystem::OnNotifiedMovedOutOfStageInClient(APalPlayerState* PlayerState, const FPalStageInstanceId& StageInstanceId) {
}

void UPalRaidBossAreaWorldSubsystem::OnNotifiedMovedIntoStageInClient(APalPlayerState* PlayerState, const FPalStageInstanceId& StageInstanceId) {
}

UPalRaidBossAreaInstanceModel* UPalRaidBossAreaWorldSubsystem::GetInstanceModel(const FGuid& RaidBossInstanceId) {
    return NULL;
}


