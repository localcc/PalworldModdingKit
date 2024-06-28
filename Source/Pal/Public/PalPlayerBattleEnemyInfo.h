#pragma once
#include "CoreMinimal.h"
#include "EPalBattleBGMType.h"
#include "PalPlayerBattleEnemyInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalPlayerBattleEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBattleBGMType Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> WeakActor;
    
    PAL_API FPalPlayerBattleEnemyInfo();
};

