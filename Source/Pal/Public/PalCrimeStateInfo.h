#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCrimeStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCrimeStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FDateTime> CrimeStateFinishTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CrimeStateArray;
    
    PAL_API FPalCrimeStateInfo();
};

