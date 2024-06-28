#include "PalArenaCharacterRestoreParameter.h"

FPalArenaCharacterRestoreParameter::FPalArenaCharacterRestoreParameter() {
    this->bValid = false;
    this->FullStomach = 0.00f;
    this->SanityValue = 0.00f;
    this->WorkerSick = EPalBaseCampWorkerSickType::None;
}

