#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerWalkAroundSettingItem.h"
#include "PalBaseCampWorkerWalkAroundSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerWalkAroundSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampWorkerWalkAroundSettingItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkAroundArrivalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkAroundNextDistance;
    
    PAL_API FPalBaseCampWorkerWalkAroundSettings();
};

