#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EPalBattleBGMType.h"
#include "PalInstanceID.h"
#include "PalPlayerBattleEnemyInfo.h"
#include "PalPlayerBattleSituation.generated.h"

// todo: probably has some parameters
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBattleRankDownDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeBGMTypeDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeNearEnemyDelegate);

UCLASS(Blueprintable)
class PAL_API UPalPlayerBattleSituation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleRankDownDelegate OnBattleRankDownDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBGMTypeDelegate OnChangeBGMTypeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNearEnemyDelegate OnChangeNearEnemyDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalPlayerBattleEnemyInfo> BattleEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNearCommonEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearDistanceSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DistanceUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBattleBGMType CurrentMaxRank;
    
public:
    UPalPlayerBattleSituation();

};

