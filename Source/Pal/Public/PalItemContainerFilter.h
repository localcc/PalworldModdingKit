#pragma once
#include "CoreMinimal.h"
#include "PalItemContainerFilter.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilterOffList;
    
    PAL_API FPalItemContainerFilter();
};

