#include "PalLevelObjectNote.h"
#include "Net/UnrealNetwork.h"

APalLevelObjectNote::APalLevelObjectNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalLevelObjectNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObjectNote, NoteRowName);
}


