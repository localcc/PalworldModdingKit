#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampTaskCheckedData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskCheckedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 completedTaskNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> buildObjectNumMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 workerNum;
    
    PAL_API FPalBaseCampTaskCheckedData();
};

