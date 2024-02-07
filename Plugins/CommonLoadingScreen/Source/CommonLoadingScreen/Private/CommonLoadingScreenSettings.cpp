#include "CommonLoadingScreenSettings.h"

UCommonLoadingScreenSettings::UCommonLoadingScreenSettings() {
    this->LoadingScreenZOrder = 1000;
    this->HoldLoadingScreenAdditionalSecs = 2.00f;
    this->LoadingScreenHeartbeatHangDuration = 0.00f;
    this->LogLoadingScreenHeartbeatInterval = 5.00f;
    this->LogLoadingScreenReasonEveryFrame = false;
    this->ForceLoadingScreenVisible = false;
    this->HoldLoadingScreenAdditionalSecsEvenInEditor = false;
    this->ForceTickLoadingScreenEvenInEditor = true;
}


