#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountBaseCamp.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountBaseCamp : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCampCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowBaseCampCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CountBaseCamp();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer_CheckBaseCamp();
    
};

