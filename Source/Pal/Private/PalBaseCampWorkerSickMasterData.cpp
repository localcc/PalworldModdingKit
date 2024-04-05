#include "PalBaseCampWorkerSickMasterData.h"

FPalBaseCampWorkerSickMasterData::FPalBaseCampWorkerSickMasterData() {
    this->SickType = EPalBaseCampWorkerSickType::None;
    this->EffectiveItemRank = 0;
    this->Facial = EPalFacialEyeType::None;
    this->WorkSpeed = 0;
    this->MoveSpeed = 0;
    this->SatietyDecrease = 0;
    this->RecoveryProbabilityPercentageInPalBox = 0;
}

