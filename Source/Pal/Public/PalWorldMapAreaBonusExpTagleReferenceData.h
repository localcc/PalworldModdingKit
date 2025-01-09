#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalWorldMapAreaBonusExpTagleReferenceData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldMapAreaBonusExpTagleReferenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReferenceTableNum;
    
    PAL_API FPalWorldMapAreaBonusExpTagleReferenceData();
};

