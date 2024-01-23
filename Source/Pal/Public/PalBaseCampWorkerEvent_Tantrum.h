#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "Templates/SubclassOf.h"
#include "PalBaseCampWorkerEvent_Tantrum.generated.h"

class UPalAIActionBaseCampTrantrum;

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_Tantrum : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBaseCampTrantrum> actionClass;
    
public:
    UPalBaseCampWorkerEvent_Tantrum();
};

