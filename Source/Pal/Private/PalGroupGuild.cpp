#include "PalGroupGuild.h"
#include "Net/UnrealNetwork.h"

UPalGroupGuild::UPalGroupGuild() {
    this->ItemStorage = NULL;
    this->CharacterTeamMission = NULL;
    this->Lab = NULL;
}

void UPalGroupGuild::OnFilteredPlayerInfo(UPlGuildPlayerInfoFilteringWaiter* Waiter, const FPalGuildPlayerInfo& FilteredInfo) {
}

void UPalGroupGuild::OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName) {
}

void UPalGroupGuild::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupGuild, PlayerInfoRepInfoArray);
    DOREPLIFETIME(UPalGroupGuild, AdminPlayerUId);
    DOREPLIFETIME(UPalGroupGuild, ItemStorage);
    DOREPLIFETIME(UPalGroupGuild, CharacterTeamMission);
    DOREPLIFETIME(UPalGroupGuild, Lab);
}


