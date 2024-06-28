#include "PalMapObjectItemChestModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectItemChestModel::UPalMapObjectItemChestModel() {
}

void UPalMapObjectItemChestModel::RequestUnlockPrivate_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectItemChestModel::RequestUnlockPrivate() {
}

void UPalMapObjectItemChestModel::RequestLockPrivate_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectItemChestModel::RequestLockPrivate() {
}

void UPalMapObjectItemChestModel::OnUpdateLocalPlayerPasswordLockInfo(const FPalMapObjectPasswordLockPlayerInfo& OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo& NewLocalPlayerInfo) {
}

void UPalMapObjectItemChestModel::OnRep_PrivateLockPlayerUId(const FGuid& OldPrivateLockPlayerUId) {
}

void UPalMapObjectItemChestModel::OnReceiveRequestLockPrivateConfirm(const bool bOn) {
}

bool UPalMapObjectItemChestModel::IsLockedPrivateByNotLocalPlayer() const {
    return false;
}

bool UPalMapObjectItemChestModel::IsLockedPrivateByNot(const FGuid& PlayerUId) const {
    return false;
}

bool UPalMapObjectItemChestModel::IsLockedPrivateByLocalPlayer() const {
    return false;
}

bool UPalMapObjectItemChestModel::IsLockedPrivateBy(const FGuid& PlayerUId) const {
    return false;
}

bool UPalMapObjectItemChestModel::IsLockedPrivate() const {
    return false;
}

void UPalMapObjectItemChestModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectItemChestModel, PrivateLockPlayerUId);
}


