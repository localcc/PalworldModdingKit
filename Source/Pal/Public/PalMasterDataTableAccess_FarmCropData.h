#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalMapObjectFarmCropData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_FarmCropData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_FarmCropData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_FarmCropData();
private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRowByCropItemId(FName CropItemId, EPalMasterDataExecPinType& ExecType, FPalMapObjectFarmCropData& OutData);
    
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalMapObjectFarmCropData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalMapObjectFarmCropData BP_FindRowByCropItemId(FName CropItemId, bool& bResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalMapObjectFarmCropData BP_FindRow(FName RowName, bool& bResult) const;
    
};

