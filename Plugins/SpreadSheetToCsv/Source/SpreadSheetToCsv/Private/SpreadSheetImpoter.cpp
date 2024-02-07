#include "SpreadSheetImpoter.h"

USpreadSheetImpoter::USpreadSheetImpoter() {
    this->TargetDataTable = NULL;
    this->bNoticeMessageAtNewRecordImported = false;
}

FString USpreadSheetImpoter::ToCsvStringForLocalizedText(const FString& pickCultureName) {
    return TEXT("");
}

FString USpreadSheetImpoter::ToCsvString() {
    return TEXT("");
}

void USpreadSheetImpoter::PostProcessImport(bool& bAppliedPostProcess) {
}

bool USpreadSheetImpoter::IsExistNewRecord() const {
    return false;
}

USpreadSheetImpoter* USpreadSheetImpoter::GetRequest(const FName sheetId, const FName sheetName, const FName Key) {
    return NULL;
}

bool USpreadSheetImpoter::FromString(const FString& Data) {
    return false;
}

FString USpreadSheetImpoter::CreateSheetUrlString(const FName sheetId, const FName sheetNameId) {
    return TEXT("");
}

USpreadSheetImpoter* USpreadSheetImpoter::Create() {
    return NULL;
}


