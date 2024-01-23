#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.h"
#include "PalItemRecipe.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_ItemRecipe.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_ItemRecipe : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_ItemRecipe();
private:
    UFUNCTION(BlueprintCallable)
    void BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalItemRecipe& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemRecipe BP_FindRow(FName RowName, bool& bResult) const;
    
};

