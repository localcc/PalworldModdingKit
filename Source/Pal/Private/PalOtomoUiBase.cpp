#include "PalOtomoUiBase.h"
#include "Templates/SubclassOf.h"

UPalOtomoUiBase::UPalOtomoUiBase() {
}

EPalTribeID UPalOtomoUiBase::GetTribeIDFromClass(const TSubclassOf<AActor>& TargetActorClass) {
    return EPalTribeID::None;
}


