#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalRecordCountRewardData.h"
#include "PalAchivementRewardDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAchivementRewardDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalRecordCountRewardData> BossDefeatRewardsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalRecordCountRewardData> PalCaptureRewardsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalRecordCountRewardData> PaldexRewardsMap;
    
    UPalAchivementRewardDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

