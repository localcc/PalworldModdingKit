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
    TArray<uint8> PrioritizeFavoriteIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalElementType> FilteringElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> FilteringSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeMale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeFemael;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeImportedPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilteringPassiveId;
    
    PAL_API FPalCharacterContainerSortInfo();
};

