#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerFindPreferredWorkInfoCache.generated.h"

class UPalWorkBase;

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerFindPreferredWorkInfoCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalWorkBase*> SortedByPriorityDescWorks;
    
    PAL_API FPalBaseCampWorkerFindPreferredWorkInfoCache();
};

