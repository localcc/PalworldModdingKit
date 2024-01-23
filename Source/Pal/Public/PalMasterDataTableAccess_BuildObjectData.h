#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalBuildObjectData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_BuildObjectData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_BuildObjectData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_BuildObjectData();
private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRowByMapObjectId(FName MapObjectId, EPalMasterDataExecPinType& ExecType, FPalBuildObjectData& OutData);
    
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalBuildObjectData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData BP_FindRowByMapObjectId(FName MapObjectId, FName& OutRowName, bool& bResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData BP_FindRow(FName RowName, bool& bResult) const;
    
};

