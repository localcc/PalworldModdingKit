#pragma once
#include "CoreMinimal.h"
#include "EPalBossType.h"
#include "PalPlayerRecordDataTrigger.h"
#include "PalRecordTrigger_BossBattle.generated.h"

class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API UPalRecordTrigger_BossBattle : public UPalPlayerRecordDataTrigger {
    GENERATED_BODY()
public:
    UPalRecordTrigger_BossBattle();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerBossBattleSuccessed(APalPlayerCharacter* LocalPlayer, EPalBossType BossType);
    
};

