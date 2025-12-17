#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectIdSet.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectIdSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> IdArray;
    
    PAL_API FPalBuildObjectIdSet();
};

