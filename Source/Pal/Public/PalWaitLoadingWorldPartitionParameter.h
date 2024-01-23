#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/WorldPartitionRuntimeCell.h"
#include "WorldPartition/WorldPartitionStreamingSource.h"
#include "PalWaitLoadingWorldPartitionParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalWaitLoadingWorldPartitionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionStreamingQuerySource QuerySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWorldPartitionRuntimeCellState CellState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InFirstDelayTime;
    
    PAL_API FPalWaitLoadingWorldPartitionParameter();
};

