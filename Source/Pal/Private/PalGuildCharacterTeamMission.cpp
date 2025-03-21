#include "PalGuildCharacterTeamMission.h"
#include "Net/UnrealNetwork.h"

UPalGuildCharacterTeamMission::UPalGuildCharacterTeamMission() {
    this->GuildExpedtionCount = 0;
}

void UPalGuildCharacterTeamMission::OnUpdatePlayerTowerBossDefeatFlag_ServerInternal(FName Key, bool NewValue) {
}

void UPalGuildCharacterTeamMission::OnUpdatePlayerTowerBossDefeatCount_ServerInternal(FName Key, int32 NewValue) {
}

void UPalGuildCharacterTeamMission::OnUpdatePlayerInfo_ServerInternal(const UPalGroupGuildBase* Owner, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo) {
}

void UPalGuildCharacterTeamMission::OnRep_ReleasedMissionInfos() {
}

void UPalGuildCharacterTeamMission::OnFinishedApplyWorldSaveData_ServerInternal() {
}

void UPalGuildCharacterTeamMission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGuildCharacterTeamMission, GuildExpedtionCount);
    DOREPLIFETIME(UPalGuildCharacterTeamMission, ReleasedMissionInfos);
}


