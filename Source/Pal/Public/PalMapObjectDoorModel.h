#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDoorModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectDoorModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDoorModel();
private:
    UFUNCTION(BlueprintCallable)
    void RequestTrigger_ServerInternal(const int32 RequestPlayerId, const int32 ToStateInt);
    
};

