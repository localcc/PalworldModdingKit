#pragma once
#include "CoreMinimal.h"
#include "PalBossSpawnerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalBossSpawnerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> RespawnDisableFlag;
    
    PAL_API FPalBossSpawnerSaveData();
};

