#pragma once
#include "CoreMinimal.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerItem.h"
#include "PalWorldObjectRecordData_MapObjectSpawner.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldObjectRecordData_MapObjectSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalWorldObjectRecordData_MapObjectSpawnerItem> ItemMap;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawner();
};

