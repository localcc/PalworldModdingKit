#pragma once
#include "CoreMinimal.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalBossBattleDifficultyParameter.generated.h"

class UPalBossBattleEventBase;

USTRUCT(BlueprintType)
struct FPalBossBattleDifficultyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalBossBattleEventBase> BossBattleEvent;
    
    PAL_API FPalBossBattleDifficultyParameter();
};

