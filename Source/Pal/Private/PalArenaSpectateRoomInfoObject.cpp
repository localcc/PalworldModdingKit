#include "PalArenaSpectateRoomInfoObject.h"
#include "Net/UnrealNetwork.h"

UPalArenaSpectateRoomInfoObject::UPalArenaSpectateRoomInfoObject() {
}

void UPalArenaSpectateRoomInfoObject::OnSequencerDelete(UPalArenaSequencer* Sequencer) {
}

void UPalArenaSpectateRoomInfoObject::OnSequenceChanged(UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType CurrentType) {
}

void UPalArenaSpectateRoomInfoObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalArenaSpectateRoomInfoObject, InfoList);
}


