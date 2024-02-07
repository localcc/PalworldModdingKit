#include "PalBaseCampEnemyObserver.h"

UPalBaseCampEnemyObserver::UPalBaseCampEnemyObserver() {
    this->CampAreaRange = 0.00f;
}

void UPalBaseCampEnemyObserver::OnEndPlayEnemy(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPalBaseCampEnemyObserver::OnDeadEnemy(FPalDeadInfo DeadInfo) {
}

bool UPalBaseCampEnemyObserver::IsBattleMode() const {
    return false;
}


