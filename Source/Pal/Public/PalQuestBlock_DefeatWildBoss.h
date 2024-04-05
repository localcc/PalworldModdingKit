#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DefeatWildBoss.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DefeatWildBoss : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BossSpawnerName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_DefeatWildBoss();

private:
    UFUNCTION(BlueprintCallable)
    void CheckFlag();
    
};

