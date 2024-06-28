#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampWorkerWalkAroundState.h"
#include "PalBaseCampWorkerWalkAroundSettingItem.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerWalkAroundSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerWalkAroundState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OccurWeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomTimeRange;
    
    PAL_API FPalBaseCampWorkerWalkAroundSettingItem();
};

