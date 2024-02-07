#include "PalGroupGuild.h"
#include "Net/UnrealNetwork.h"

UPalGroupGuild::UPalGroupGuild() {
}

void UPalGroupGuild::OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName) {
}

void UPalGroupGuild::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupGuild, PlayerInfoRepInfoArray);
    DOREPLIFETIME(UPalGroupGuild, AdminPlayerUId);
}


