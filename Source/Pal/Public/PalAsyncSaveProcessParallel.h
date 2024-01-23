#pragma once
#include "CoreMinimal.h"
#include "PalAsyncSaveProcess.h"
#include "PalAsyncSaveProcessParallel.generated.h"

USTRUCT(BlueprintType)
struct FPalAsyncSaveProcessParallel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPalAsyncSaveProcess> ProcessMap;
    
    PAL_API FPalAsyncSaveProcessParallel();
};

