#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDungeonSpawnAreaData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonSpawnAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DungeonNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PostfixTextId;
    
    FPalDungeonSpawnAreaData();
};

