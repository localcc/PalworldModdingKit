#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalBaseCampWorkCollectionStashInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkCollectionStashInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime StashAtTime;
    
    PAL_API FPalBaseCampWorkCollectionStashInfo();
};

