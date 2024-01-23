#include "CommonUserInitializeParams.h"

FCommonUserInitializeParams::FCommonUserInitializeParams() {
    this->LocalPlayerIndex = 0;
    this->ControllerId = 0;
    this->RequestedPrivilege = ECommonUserPrivilege::CanPlay;
    this->OnlineContext = ECommonUserOnlineContext::Game;
    this->bCanCreateNewLocalPlayer = false;
    this->bCanUseGuestLogin = false;
    this->bSuppressLoginErrors = false;
}

