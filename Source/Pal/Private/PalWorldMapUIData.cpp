#include "PalWorldMapUIData.h"

UPalWorldMapUIData::UPalWorldMapUIData() {
    this->MaskRenderTarget = NULL;
    this->MaskTexture = NULL;
    this->worldMapDataTable = NULL;
}

bool UPalWorldMapUIData::UnlockMap(const FName& regionId, const int32 PlayerId) {
    return false;
}

bool UPalWorldMapUIData::IsUnlockedMap(const FName& regionId) {
    return false;
}

void UPalWorldMapUIData::GetUnlockedMapData(TMap<FName, bool>& outMapData) {
}

bool UPalWorldMapUIData::GetCurrentPlayMapUIData(FPalWorldMapUIDataTableRow& OutData) {
    return false;
}

FName UPalWorldMapUIData::GetCurrentPlayMapName() {
    return NAME_None;
}


