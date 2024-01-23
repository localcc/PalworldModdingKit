#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalBossType.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckBossDefeat.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CheckBossDefeat : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType CheckBossType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CheckBossDefeat();
private:
    UFUNCTION(BlueprintCallable)
    void CheckFlag();
    
};

