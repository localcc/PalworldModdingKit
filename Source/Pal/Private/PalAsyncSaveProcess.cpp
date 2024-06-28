#include "PalAsyncSaveProcess.h"

FPalAsyncSaveProcess::FPalAsyncSaveProcess() {
    this->State = EPalAsyncSaveProcessState::Collecting;
}

