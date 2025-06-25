#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalQuestTrackingLocationSettingData.h"
#include "PalLocalQuestLocationData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalQuestLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalQuestTrackingLocationSettingData SettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LocationIdArray;
    
    PAL_API FPalLocalQuestLocationData();
};

