#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalAIOtomoParameterInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIOtomoParameterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIOtomoParameterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsReturningFromFar(bool IsReturningFromFar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsReturningFromFar() const;
    
};

