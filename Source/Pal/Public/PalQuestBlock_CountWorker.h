#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountWorker.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountWorker : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireWorkerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowWorkerCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CountWorker();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer_CheckBaseCampWorker();
    
};

