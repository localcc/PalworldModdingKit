#include "CommonPlayerController.h"

ACommonPlayerController::ACommonPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}


