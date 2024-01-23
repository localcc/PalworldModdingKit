#pragma once
#include "CoreMinimal.h"
#include "EPalUIServerListSortType.h"
#include "PalUIServerDataCollectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIServerDataCollectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIServerListSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchWord;
    
    PAL_API FPalUIServerDataCollectInfo();
};

