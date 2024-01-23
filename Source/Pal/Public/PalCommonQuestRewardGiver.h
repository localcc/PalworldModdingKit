#pragma once
#include "CoreMinimal.h"
#include "PalCommonQuestRewardData.h"
#include "PalQuestRewardGiver.h"
#include "PalCommonQuestRewardGiver.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCommonQuestRewardGiver : public UPalQuestRewardGiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCommonQuestRewardData RewardData;
    
public:
    UPalCommonQuestRewardGiver();
    UFUNCTION(BlueprintCallable)
    void SetCommonRewardData(FPalCommonQuestRewardData InRewardList);
    
};

