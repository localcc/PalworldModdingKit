#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordCountMapStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordCountMapStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int64> countMap;
    
    PAL_API FPalPlayerRecordCountMapStruct();
};

