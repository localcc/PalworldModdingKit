#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalMapObjectMasterData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_MapObjectMasterData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_MapObjectMasterData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_MapObjectMasterData();
private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalMapObjectMasterData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalMapObjectMasterData BP_FindRow(FName RowName, bool& bResult) const;
    
};

