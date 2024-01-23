#pragma once
#include "CoreMinimal.h"
#include "PalStageInstanceId.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerInStage.h"
#include "PalWorldObjectRecorderBase.h"
#include "PalWorldObjectRecord_MapObjectSpawnerInStage.generated.h"

UCLASS(Blueprintable)
class UPalWorldObjectRecord_MapObjectSpawnerInStage : public UPalWorldObjectRecorderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalStageInstanceId, FPalWorldObjectRecordData_MapObjectSpawnerInStage> RecordDataMapByStageInstanceId;
    
public:
    UPalWorldObjectRecord_MapObjectSpawnerInStage();
};

