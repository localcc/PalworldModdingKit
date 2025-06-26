#include "PalPlayerTreasureMapPointData.h"
#include "Net/UnrealNetwork.h"

UPalPlayerTreasureMapPointData::UPalPlayerTreasureMapPointData() {
}

void UPalPlayerTreasureMapPointData::OnRemovedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId) {
}

void UPalPlayerTreasureMapPointData::OnRegisterTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId) {
}

void UPalPlayerTreasureMapPointData::OnMovedTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId) {
}

void UPalPlayerTreasureMapPointData::OnAddedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId, const FPalPlayerRecordDataFoundTreasureMapPoint& PointData) {
}

void UPalPlayerTreasureMapPointData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerTreasureMapPointData, TreasureMapPointRepInfoArray);
}


