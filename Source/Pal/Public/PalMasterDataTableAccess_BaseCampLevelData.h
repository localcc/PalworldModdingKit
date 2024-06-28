#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampLevelMasterData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_BaseCampLevelData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_BaseCampLevelData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_BaseCampLevelData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxWorkerMaxNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBaseCampMaxNumInGuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBaseCampLevelMasterData GetLevelInfo(int32 Level);
    
};

