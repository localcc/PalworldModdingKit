#include "PalTutorialManager.h"

void UPalTutorialManager::TutorialTrigger_Common(EPalTutorialTriggerConditionType TriggerType) {
}

void UPalTutorialManager::TutorialTrigger_Capture(FPalUIPalCaptureInfo CaptureInfo, bool CaptureSuccess) {
}

UPalTutorialManager::UPalTutorialManager() {
    this->MsgDataTable = NULL;
    this->TutorialTriggersDataTable = NULL;
}

