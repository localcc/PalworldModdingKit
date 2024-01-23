#pragma once
#include "CoreMinimal.h"
#include "PalDungeonSpawnAreaData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_DungeonSpawnAreaData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_DungeonSpawnAreaData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_DungeonSpawnAreaData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalDungeonSpawnAreaData BP_FindRow(FName RowName, bool& bResult) const;
    
};

