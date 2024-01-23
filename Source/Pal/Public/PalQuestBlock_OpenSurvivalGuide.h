#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_OpenSurvivalGuide.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_OpenSurvivalGuide : public UPalQuestBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_OpenSurvivalGuide();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer_CheckOpen();
    
};

