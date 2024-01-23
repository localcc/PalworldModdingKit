#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncSaveProcessState.h"
#include "PalAsyncSaveProcess.generated.h"

USTRUCT(BlueprintType)
struct FPalAsyncSaveProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAsyncSaveProcessState State;
    
    PAL_API FPalAsyncSaveProcess();
};

