#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInflictDamageNotifyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalInflictDamageNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IPalInflictDamageNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDefeatCharacter(const FPalDeadInfo& DeadInfo);
    
};

