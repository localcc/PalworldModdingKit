#pragma once
#include "CoreMinimal.h"
#include "PalUIBossDefeatRewardDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIBossDefeatRewardDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechnologyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefeatCharacterID;
    
    PAL_API FPalUIBossDefeatRewardDisplayData();
};

