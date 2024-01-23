#include "PalMapObjectDeathDroppedCharacterModel.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectDeathDroppedCharacterModel::OnChangedPlayerInfoInLocalPlayerGuild_ClientInternal(APalPlayerState* LocalPlayerState) {
}

bool UPalMapObjectDeathDroppedCharacterModel::IsSameGuildInLocalPlayer() const {
    return false;
}

void UPalMapObjectDeathDroppedCharacterModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectDeathDroppedCharacterModel, OwnerPlayerUId);
}

UPalMapObjectDeathDroppedCharacterModel::UPalMapObjectDeathDroppedCharacterModel() {
}

