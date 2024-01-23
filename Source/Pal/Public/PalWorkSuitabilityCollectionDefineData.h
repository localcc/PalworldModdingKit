#pragma once
#include "CoreMinimal.h"
#include "PalCollectionRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityCollectionDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityCollectionDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCollectionRankDefineData> CollectionDefineData;
    
    PAL_API FPalWorkSuitabilityCollectionDefineData();
};

