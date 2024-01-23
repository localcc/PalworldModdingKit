#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalBaseCampAssignType.h"
#include "PalBaseCampAssignableObjectInterface.generated.h"

class IPalMapObjectModelInterface;
class UPalMapObjectModelInterface;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalBaseCampAssignableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IPalBaseCampAssignableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IPalMapObjectModelInterface> ToMapObjectModel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPalBaseCampAssignType GetAssignType() const;
    
};

