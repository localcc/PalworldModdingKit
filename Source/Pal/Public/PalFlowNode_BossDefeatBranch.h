#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_BossDefeatBranch.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_BossDefeatBranch : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleDifficulty CheckDifficulty;
    
public:
    UPalFlowNode_BossDefeatBranch();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefeated() const;
    
};

