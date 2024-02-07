#include "PalWorkAssign_LevelObject.h"
#include "Net/UnrealNetwork.h"

UPalWorkAssign_LevelObject::UPalWorkAssign_LevelObject() {
}

void UPalWorkAssign_LevelObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkAssign_LevelObject, TargetMapObjectModelId);
}


