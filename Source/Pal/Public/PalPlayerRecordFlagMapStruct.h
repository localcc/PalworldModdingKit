#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordFlagMapStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordFlagMapStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> flagMap;
    
    PAL_API FPalPlayerRecordFlagMapStruct();
};

