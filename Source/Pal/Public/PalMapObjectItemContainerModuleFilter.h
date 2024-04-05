#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemContainerModuleFilter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectItemContainerModuleFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilterOffList;
    
    PAL_API FPalMapObjectItemContainerModuleFilter();
};

