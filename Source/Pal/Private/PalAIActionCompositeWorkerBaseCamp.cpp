#include "PalAIActionCompositeWorkerBaseCamp.h"
#include "PalAIActionCombat_Standard.h"

UPalAIActionCompositeWorkerBaseCamp::UPalAIActionCompositeWorkerBaseCamp() {
    this->CombatActionClass = UPalAIActionCombat_Standard::StaticClass();
    this->DefenseActionClass = NULL;
}


