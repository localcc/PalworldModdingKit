#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "PalInstanceID.h"
#include "PalPlayerBattleEnemyInfo.h"
#include "PalPlayerBattleSituation.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBattleRankDownDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnemyAddRemoveDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeNearEnemyDelegate);

UCLASS(Blueprintable)
class PAL_API UPalPlayerBattleSituation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleRankDownDelegate OnBattleRankDownDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAddRemoveDelegate OnEnemyAddRemoveDelegate;
    
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
    
public:
    UPalPlayerBattleSituation();
};

