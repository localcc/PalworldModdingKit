#include "PalPlayerBattleSituation.h"
#include "Net/UnrealNetwork.h"

UPalPlayerBattleSituation::UPalPlayerBattleSituation() {
    this->IsNearCommonEnemy = false;
    this->NearDistanceSqr = -1.00f;
    this->CurrentMaxRank = EPalBattleBGMType::None;
}

void UPalPlayerBattleSituation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerBattleSituation, EnemyList);
}


