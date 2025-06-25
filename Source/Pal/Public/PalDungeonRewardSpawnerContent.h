#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDungeonRewardSpawnerContent.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalDungeonRewardSpawnerContent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RewardLotteryId;
    
public:
    UPalDungeonRewardSpawnerContent();

};

