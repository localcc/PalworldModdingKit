#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonRewardSpawnerContentType.h"
#include "PalBinaryMemory.h"
#include "PalDungeonRewardSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonRewardSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonRewardSpawnerContentType ContentType;
    
    PAL_API FPalDungeonRewardSaveData();
};

