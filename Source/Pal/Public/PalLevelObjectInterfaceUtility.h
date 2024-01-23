#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalLevelObjectInterfaceUtility.generated.h"

class IPalLevelObjectInterface;
class UPalLevelObjectInterface;

UCLASS(Blueprintable)
class UPalLevelObjectInterfaceUtility : public UObject {
    GENERATED_BODY()
public:
    UPalLevelObjectInterfaceUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid BP_GetLevelObjectInstanceId(TScriptInterface<IPalLevelObjectInterface> Target);
    
};

