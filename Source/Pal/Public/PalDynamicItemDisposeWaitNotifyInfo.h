#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemDisposeWaitNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDynamicItemDisposeWaitNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDynamicItemId> DynamicItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WaitPlayerIds;
    
    PAL_API FPalDynamicItemDisposeWaitNotifyInfo();
};

