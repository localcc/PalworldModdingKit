#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionCompositeWorkerModuleBase.h"
#include "PalAIActionCompositeWorkerModuleBaseCamp.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable)
class UPalAIActionCompositeWorkerModuleBaseCamp : public UPalAIActionCompositeWorkerModuleBase {
    GENERATED_BODY()
public:
    UPalAIActionCompositeWorkerModuleBaseCamp();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampBelongTo() const;
    
};

