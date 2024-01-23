#pragma once
#include "CoreMinimal.h"
#include "PalCollectionRankDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalCollectionRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropNumRate;
    
    PAL_API FPalCollectionRankDefineData();
};

