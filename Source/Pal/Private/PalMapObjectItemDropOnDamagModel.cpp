#include "PalMapObjectItemDropOnDamagModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectItemDropOnDamagModel::UPalMapObjectItemDropOnDamagModel() {
    this->bBaseCampResourceCollectorTarget = false;
    this->bRequireDetection = false;
    this->bDetectedByPlayer = false;
}

void UPalMapObjectItemDropOnDamagModel::RequestMarkDetectedByPlayer_ServerInternal(const int32 PlayerId, bool bDetected) {
}

void UPalMapObjectItemDropOnDamagModel::RequestMarkDetectedByPlayer(const bool bDetected) {
}

void UPalMapObjectItemDropOnDamagModel::OnRep_DetectedByPlayer() {
}

void UPalMapObjectItemDropOnDamagModel::OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp) {
}

bool UPalMapObjectItemDropOnDamagModel::IsDetectedByPlayer() const {
    return false;
}

void UPalMapObjectItemDropOnDamagModel::BroadcastMarkDetectedByPlayer_Multicast(const bool bDetected) {
}

void UPalMapObjectItemDropOnDamagModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectItemDropOnDamagModel, bDetectedByPlayer);
}


