#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_UseStatusPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_UseStatusPoint : public UPalQuestBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_UseStatusPoint();
protected:
    UFUNCTION(BlueprintCallable)
    void TryInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStatusPoint();
    
};

