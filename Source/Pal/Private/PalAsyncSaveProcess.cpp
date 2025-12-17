#include "PalAsyncSaveProcess.h"

FPalAsyncSaveProcess::FPalAsyncSaveProcess() {
    this->State = EPalAsyncSaveProcessState::Collecting;
    this->bPreDelegateSuccess = false;
    this->SaveObject = NULL;
}

