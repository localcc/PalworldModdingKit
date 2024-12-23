#include "PalMapObjectCharacterTeamMissionAssignedInfo.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectCharacterTeamMissionAssignedInfo::UPalMapObjectCharacterTeamMissionAssignedInfo() {
    this->RequiredElementalCharacterNum = 0;
}

void UPalMapObjectCharacterTeamMissionAssignedInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionAssignedInfo, RepInfoArray);
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionAssignedInfo, RequiredElementalCharacterNum);
}


