#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_DungeonSpawnAreaData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_DungeonSpawnAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_DungeonSpawnAreaData();
};

