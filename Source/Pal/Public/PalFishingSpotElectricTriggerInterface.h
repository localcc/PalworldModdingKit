#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalFishingSpotElectricTriggerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalFishingSpotElectricTriggerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalFishingSpotElectricTriggerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTriggerEnabled() const;
    
};

