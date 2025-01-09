#include "PalBuildObjectCharacterTeamMission.h"

APalBuildObjectCharacterTeamMission::APalBuildObjectCharacterTeamMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMoveSpeedMax = 0.00f;
    this->ProgressTimeInPerformance = 0.00f;
}

void APalBuildObjectCharacterTeamMission::OnChangedState_ServerInternal(const EPalMapObjectCharacterTeamMissionState LastMissionState, const EPalMapObjectCharacterTeamMissionState CurrentMissionState) {
}

void APalBuildObjectCharacterTeamMission::BroadcastStopMissionPerformance_Multicast_Implementation() {
}

void APalBuildObjectCharacterTeamMission::BroadcastStartMissionPerformance_Multicast_Implementation(const TArray<FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData>& StartCharacterDataList) {
}


