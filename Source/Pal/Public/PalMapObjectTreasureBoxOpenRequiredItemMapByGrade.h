#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectTreasureBoxOpenRequiredItemMapByGrade.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectTreasureBoxOpenRequiredItemMapByGrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectTreasureGradeType, FPalDataTableRowName_ItemData> RequiredItemMapByGrade;
    
    PAL_API FPalMapObjectTreasureBoxOpenRequiredItemMapByGrade();
};

