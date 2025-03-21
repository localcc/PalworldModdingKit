#pragma once
#include "CoreMinimal.h"
#include "EPalDimensionStorageReplicationTriggerType.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStoragePageReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FPalDimensionStoragePageReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDimensionPalStorageSaveParameter> PageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtyToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDimensionStorageReplicationTriggerType TriggerType;
    
    PAL_API FPalDimensionStoragePageReplicationData();
};

