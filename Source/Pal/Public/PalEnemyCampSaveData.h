#pragma once
#include "CoreMinimal.h"
#include "PalEnemyCampStatus.h"
#include "PalEnemyCampSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalEnemyCampSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalEnemyCampStatus> EnemyCampStatusMap;
    
    PAL_API FPalEnemyCampSaveData();
};

