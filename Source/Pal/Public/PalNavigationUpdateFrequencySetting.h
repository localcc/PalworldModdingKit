#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalNavigationUpdateFrequencySetting.generated.h"

USTRUCT(BlueprintType)
struct FPalNavigationUpdateFrequencySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateDivideRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UpdatableRangeMinMaxFromPlayer;
    
    PAL_API FPalNavigationUpdateFrequencySetting();
};

