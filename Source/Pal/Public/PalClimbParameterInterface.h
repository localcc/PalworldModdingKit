#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalClimbParameterInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalClimbParameterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalClimbParameterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetConsumeStaminaSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetClimbMoveSpeedRate() const;
    
};

