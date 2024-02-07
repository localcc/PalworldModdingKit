#include "PalFoliageInstance.h"
#include "Net/UnrealNetwork.h"

UPalFoliageInstance::UPalFoliageInstance() {
    this->HP = -1;
    this->bAlive = true;
}

void UPalFoliageInstance::OnRep_WorldTransform() {
}

void UPalFoliageInstance::OnRep_Alive(bool bOldValue) {
}

void UPalFoliageInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFoliageInstance, FoliageTypeId);
    DOREPLIFETIME(UPalFoliageInstance, HP);
    DOREPLIFETIME(UPalFoliageInstance, bAlive);
    DOREPLIFETIME(UPalFoliageInstance, WorldTransform);
}


