#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusLifeSteal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStatusLifeSteal : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPalStatusLifeSteal();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLifeSteal(int32 Damage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalucRecoverPoint(int32 Damage);
    
};

