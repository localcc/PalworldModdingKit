#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalUIBossSpawnerLoactionData.h"
#include "PalMasterDataTableAccess_BossSpawnerUIData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_BossSpawnerUIData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_BossSpawnerUIData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalUIBossSpawnerLoactionData BP_FindRow(FName RowName, bool& bResult) const;
    
};

