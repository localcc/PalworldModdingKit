#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampTaskData_WorkerNum.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskData_WorkerNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName incompleteMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName completeMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requireNum;
    
    PAL_API FPalBaseCampTaskData_WorkerNum();
};

