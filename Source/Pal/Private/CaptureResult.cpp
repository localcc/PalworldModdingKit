#include "CaptureResult.h"

FCaptureResult::FCaptureResult() {
    this->IsSuccess = false;
    this->TestSuccessCount = 0;
    this->FailedCaptureType = EFailedCaptureType::None;
}

