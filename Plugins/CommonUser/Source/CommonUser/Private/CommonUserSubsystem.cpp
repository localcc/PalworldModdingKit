#include "CommonUserSubsystem.h"

UCommonUserSubsystem::UCommonUserSubsystem() {
}

bool UCommonUserSubsystem::TryToLoginForOnlinePlay(int32 LocalPlayerIndex) {
    return false;
}

bool UCommonUserSubsystem::TryToInitializeUser(FCommonUserInitializeParams Params) {
    return false;
}

bool UCommonUserSubsystem::TryToInitializeForLocalPlay(int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin) {
    return false;
}

bool UCommonUserSubsystem::ShouldWaitForStartInput() const {
    return false;
}

void UCommonUserSubsystem::SetMaxLocalPlayers(int32 InMaxLocalPLayers) {
}

void UCommonUserSubsystem::SendSystemMessage(FGameplayTag MessageType, FText TitleText, FText BodyText) {
}

void UCommonUserSubsystem::ResetUserState() {
}

void UCommonUserSubsystem::ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FCommonUserInitializeParams Params) {
}

bool UCommonUserSubsystem::HasTraitTag(const FGameplayTag TraitTag) const {
    return false;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const {
    return NULL;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex) const {
    return NULL;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUser(FPlatformUserId PlatformUser) const {
    return NULL;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const {
    return NULL;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForInputDevice(FInputDeviceId InputDevice) const {
    return NULL;
}

UCommonUserInfo* UCommonUserSubsystem::GetUserInfoForControllerId(int32 ControllerId) const {
    return NULL;
}

int32 UCommonUserSubsystem::GetNumLocalPlayers() const {
    return 0;
}

int32 UCommonUserSubsystem::GetMaxLocalPlayers() const {
    return 0;
}

ECommonUserInitializationState UCommonUserSubsystem::GetLocalPlayerInitializationState(int32 LocalPlayerIndex) const {
    return ECommonUserInitializationState::Unknown;
}

bool UCommonUserSubsystem::CancelUserInitialization(int32 LocalPlayerIndex) {
    return false;
}


