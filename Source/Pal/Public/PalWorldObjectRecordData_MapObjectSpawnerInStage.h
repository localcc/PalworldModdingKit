#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldObjectRecordData_MapObjectSpawner.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerInStage.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldObjectRecordData_MapObjectSpawnerInStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalWorldObjectRecordData_MapObjectSpawner> RecordDataMapByLevelObjectInstanceId;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawnerInStage();
};

