#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalReticleTargetableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalReticleTargetableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalReticleTargetableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsShowOutlineInReticleTargetting() const;
    
};

