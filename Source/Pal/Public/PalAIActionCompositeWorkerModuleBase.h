#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalAIActionCompositeWorkerModuleBase.generated.h"

class UPalAIActionCompositeWorker;

UCLASS(Abstract, Blueprintable)
class UPalAIActionCompositeWorkerModuleBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAIActionCompositeWorker* Owner;
    
    UPalAIActionCompositeWorkerModuleBase();
};

