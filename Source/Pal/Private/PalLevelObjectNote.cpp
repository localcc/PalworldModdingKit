#include "PalLevelObjectNote.h"
#include "Net/UnrealNetwork.h"

void APalLevelObjectNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObjectNote, NoteRowName);
}

APalLevelObjectNote::APalLevelObjectNote() {
}

