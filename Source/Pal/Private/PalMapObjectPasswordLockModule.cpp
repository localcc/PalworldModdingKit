#include "PalMapObjectPasswordLockModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPasswordLockModule::UPalMapObjectPasswordLockModule() {
    this->LockState = EPalMapObjectPasswordLockState::Unlock;
    this->TryAuthenticateMaxNum = -1;
}

void UPalMapObjectPasswordLockModule::RequestUpdateUnlock_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectPasswordLockModule::RequestUpdatePassword_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPasswordLockModule::RequestUpdatePassword(const FString& NewPassword) {
}

void UPalMapObjectPasswordLockModule::RequestUpdateLock(const EPalMapObjectPasswordLockState NewLockState) {
}

void UPalMapObjectPasswordLockModule::RequestOpenUIPasswordSetting() {
}

void UPalMapObjectPasswordLockModule::RequestAuthenticate_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPasswordLockModule::RequestAuthenticate(const FString& InputPassword) {
}

void UPalMapObjectPasswordLockModule::OpenMenuSecuritySetting() {
}

void UPalMapObjectPasswordLockModule::OnRep_PlayerInfos(const TArray<FPalMapObjectPasswordLockPlayerInfo>& OldValue) {
}

void UPalMapObjectPasswordLockModule::NotifyAuthenticationResult(const bool passed) {
}

EPalMapObjectPasswordLockState UPalMapObjectPasswordLockModule::GetLockState() const {
    return EPalMapObjectPasswordLockState::Lock;
}

bool UPalMapObjectPasswordLockModule::CanTryAuthenticateByPlayer(const FGuid& RequestPlayerUId) const {
    return false;
}

void UPalMapObjectPasswordLockModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPasswordLockModule, LockState);
    DOREPLIFETIME(UPalMapObjectPasswordLockModule, PlayerInfos);
    DOREPLIFETIME(UPalMapObjectPasswordLockModule, TryAuthenticateMaxNum);
}


