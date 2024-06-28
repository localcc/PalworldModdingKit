#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterContainerSortType.h"
#include "EPalElementType.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterContainerSortInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterContainerSortInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterContainerSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeFavorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalElementType> FilteringElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> FilteringSuitability;
    
    PAL_API FPalCharacterContainerSortInfo();
};

