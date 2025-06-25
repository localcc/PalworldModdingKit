#include "PalPlayerLocalRecordData.h"

UPalPlayerLocalRecordData::UPalPlayerLocalRecordData() {
    this->Local_IsBuildMenuChecked = false;
    this->Local_PlayTime = 0;
    this->Local_DoctorSurgiCount = 0;
    this->Local_DoctorLastSurgiDay = 0;
}

void UPalPlayerLocalRecordData::ResetQuickStackExceptList() {
}

void UPalPlayerLocalRecordData::RemoveQuickStackExceptId(const FName StaticItemId) {
}

bool UPalPlayerLocalRecordData::AddQuickStackExceptId(const FName StaticItemId) {
    return false;
}


