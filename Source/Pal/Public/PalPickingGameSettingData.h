#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPickingGameSettingData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPalPickingGameSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockableRangeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LimitKeyPressureCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* KeyTurningCurveOutsideUnlockableRange;
    
    PAL_API FPalPickingGameSettingData();
};

