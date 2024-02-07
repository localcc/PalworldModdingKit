#include "PalWorldObjectRecordWorldSubsystem.h"
#include "Templates/SubclassOf.h"

UPalWorldObjectRecordWorldSubsystem::UPalWorldObjectRecordWorldSubsystem() {
    this->bShouldCreate = true;
}

UPalWorldObjectRecorderBase* UPalWorldObjectRecordWorldSubsystem::BP_GetRecorder(const UObject* WorldContextObject, const TSubclassOf<UPalWorldObjectRecorderBase> TargetClass) {
    return NULL;
}


