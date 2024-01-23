#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampTaskData_BuildObject.h"
#include "PalBaseCampTaskData_WorkerNum.h"
#include "PalBaseCampTaskDataSet.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampTaskData_BuildObject> requireBuildObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampTaskData_WorkerNum requirePalNum;
    
    PAL_API FPalBaseCampTaskDataSet();
};

