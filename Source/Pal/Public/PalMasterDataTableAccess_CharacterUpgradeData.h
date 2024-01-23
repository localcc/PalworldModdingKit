#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_CharacterUpgradeData.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_CharacterUpgradeData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_CharacterUpgradeData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRank();
    
};

