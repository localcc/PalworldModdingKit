#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalAIControllerBaseCampStatus.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable)
class UPalAIControllerBaseCampStatus : public UObject {
    GENERATED_BODY()
public:
    UPalAIControllerBaseCampStatus();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCamp() const;
    
};

