#include "PalRandomIncidentObjectPlacement.h"

APalRandomIncidentObjectPlacement::APalRandomIncidentObjectPlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

TArray<UPalRandomIncidentPlacementEggDataComponent*> APalRandomIncidentObjectPlacement::GetEggDataComponents() const {
    return TArray<UPalRandomIncidentPlacementEggDataComponent*>();
}

TArray<UPalRandomIncidentPlacementDropItemDataComponent*> APalRandomIncidentObjectPlacement::GetDropItemDataComponents() const {
    return TArray<UPalRandomIncidentPlacementDropItemDataComponent*>();
}


