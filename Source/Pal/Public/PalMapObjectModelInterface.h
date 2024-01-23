#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "PalMapObjectModelInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalMapObjectModelInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectModelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGuid GetModelId() const PURE_VIRTUAL(GetModelId, return FGuid{};);
    
};

