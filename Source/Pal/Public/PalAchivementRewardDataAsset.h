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
    TArray<FPalRecordCountRewardData> BossDefeatRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRecordCountRewardData> PalCaptureRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRecordCountRewardData> PaldexRewards;
    
    UPalAchivementRewardDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

