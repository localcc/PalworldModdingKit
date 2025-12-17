#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBinaryMemory.h"
#include "PalInstanceID.h"
#include "PalRaidBossAreaInstanceSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossAreaInstanceSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> BaseCampWorkerIndividualIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FGuid> BaseCampWorkerSpawnedByPlayerMap;
    
    PAL_API FPalRaidBossAreaInstanceSaveData();
};

