#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncSaveProcessState.h"
#include "PalAsyncSaveProcess.generated.h"

class USaveGame;

USTRUCT(BlueprintType)
struct FPalAsyncSaveProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAsyncSaveProcessState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreDelegateSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveGame* SaveObject;
    
    PAL_API FPalAsyncSaveProcess();
};

