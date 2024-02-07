#include "PalBaseCampWorkerEventBase.h"

UPalBaseCampWorkerEventBase::UPalBaseCampWorkerEventBase() {
    this->logType = EPalLogType::None;
}

bool UPalBaseCampWorkerEventBase::IsTriggerEventBySanity_Implementation(const float SanityValue) const {
    return false;
}

bool UPalBaseCampWorkerEventBase::IsTriggerEventByCharacter_Implementation(const APalCharacter* Character) const {
    return false;
}

FString UPalBaseCampWorkerEventBase::Debug_CreateTextTriggerEventSanity_Implementation() {
    return TEXT("");
}



