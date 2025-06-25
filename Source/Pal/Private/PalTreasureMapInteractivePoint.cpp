#include "PalTreasureMapInteractivePoint.h"
#include "Net/UnrealNetwork.h"

APalTreasureMapInteractivePoint::APalTreasureMapInteractivePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PickupAkEvent = NULL;
}



void APalTreasureMapInteractivePoint::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalTreasureMapInteractivePoint::OnRemovePointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId) {
}

void APalTreasureMapInteractivePoint::OnCompleteLocalPlayerSetup(APalPlayerState* PlayerState) {
}


void APalTreasureMapInteractivePoint::OnAddedOrChangedPointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId) {
}

void APalTreasureMapInteractivePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalTreasureMapInteractivePoint, OwnerLevelInstanceId);
}


