#include "PalMasterDataTableAccess_FarmCropData.h"

UPalMasterDataTableAccess_FarmCropData::UPalMasterDataTableAccess_FarmCropData() {
}

void UPalMasterDataTableAccess_FarmCropData::BPExec_FindRowByCropItemId(FName CropItemId, EPalMasterDataExecPinType& ExecType, FPalMapObjectFarmCropData& OutData) {
}

void UPalMasterDataTableAccess_FarmCropData::BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalMapObjectFarmCropData& OutData) {
}

FPalMapObjectFarmCropData UPalMasterDataTableAccess_FarmCropData::BP_FindRowByCropItemId(FName CropItemId, bool& bResult) const {
    return FPalMapObjectFarmCropData{};
}

FPalMapObjectFarmCropData UPalMasterDataTableAccess_FarmCropData::BP_FindRow(FName RowName, bool& bResult) const {
    return FPalMapObjectFarmCropData{};
}


