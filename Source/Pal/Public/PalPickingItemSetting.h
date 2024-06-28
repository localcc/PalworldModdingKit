#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalPickingItemSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalPickingItemSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalMapObjectTreasureGradeType> PickableGradeTypeArray;
    
    PAL_API FPalPickingItemSetting();
};

