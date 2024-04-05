#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectRaidBossSummon.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectRaidBossSummon : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectRaidBossSummon(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StartPerform();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPerformComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayPerform();
    
};

