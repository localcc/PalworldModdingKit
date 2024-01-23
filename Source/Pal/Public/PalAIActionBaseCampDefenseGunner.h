#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampDefenseBase.h"
#include "PalAIActionBaseCampDefenseGunner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionBaseCampDefenseGunner : public UPalAIActionBaseCampDefenseBase {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampDefenseGunner();
private:
    UFUNCTION(BlueprintCallable)
    void StopTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnShootBullet();
    
};

