#include "PalMonsterControllerBaseCampHungryParameter.h"

FPalMonsterControllerBaseCampHungryParameter::FPalMonsterControllerBaseCampHungryParameter() {
    this->RecoverSatietyTo = 0.00f;
    this->RecoverSanityTo = 0.00f;
    this->EatMaxNum = 0;
    this->RecoverStatusType = EPalBaseCampRecoverStatusType::Hungry;
}

