#include "PalSupplyDropActor.h"
#include "Net/UnrealNetwork.h"

APalSupplyDropActor::APalSupplyDropActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->KnockBackMaxPower = 1000;
    this->LandHitDamageRate = 0.50f;
    this->SupplyType = EPalSupplyType::None;
}

void APalSupplyDropActor::OnReplicateMapObjectModel(UPalMapObjectModel* MapObjectModel) {
}

void APalSupplyDropActor::OnRep_MapObjectID() {
}


void APalSupplyDropActor::OnCreateMapObject(APalMapObject* MapObject) {
}

void APalSupplyDropActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalSupplyDropActor, TargetLocation);
    DOREPLIFETIME(APalSupplyDropActor, Velocity);
    DOREPLIFETIME(APalSupplyDropActor, SupplyType);
    DOREPLIFETIME(APalSupplyDropActor, TotalFallTime);
    DOREPLIFETIME(APalSupplyDropActor, MapObjectId);
}


