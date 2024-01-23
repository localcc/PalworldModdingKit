#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalMapObjectItemCollectableInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalMapObjectItemCollectableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectItemCollectableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual EPalMapObjectItemCollectableType GetItemCollectableType() const PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetCollectableStaticItemIds(TArray<FName>& OutStaticItemIds) PURE_VIRTUAL(GetCollectableStaticItemIds,);
    
};

