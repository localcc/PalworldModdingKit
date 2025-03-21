#include "PalNPCMultiTalkHandle.h"

UPalNPCMultiTalkHandle::UPalNPCMultiTalkHandle() {
}

void UPalNPCMultiTalkHandle::SetIsTransientTalkCount(bool IsTransient) {
}


void UPalNPCMultiTalkHandle::IncrementTalkCountRecord() {
}

FName UPalNPCMultiTalkHandle::GetTalkId() const {
    return NAME_None;
}

UDataTable* UPalNPCMultiTalkHandle::GetTalkData_Implementation(const FName& inTalkID) {
    return NULL;
}

UPalPlayerRecordData* UPalNPCMultiTalkHandle::GetRecordData() const {
    return NULL;
}

UPalPlayerDataStorage* UPalNPCMultiTalkHandle::GetPlayerDataStorage() const {
    return NULL;
}

int32 UPalNPCMultiTalkHandle::GetCurrentTalkCount() const {
    return 0;
}


