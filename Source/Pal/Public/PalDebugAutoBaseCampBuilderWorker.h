#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDebugAutoBaseCampBuilderWorker.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugAutoBaseCampBuilderWorker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData MonsterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalDebugAutoBaseCampBuilderWorker();
};

