#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "Templates/SubclassOf.h"
#include "PalBaseCampWorkerEvent_DodgeWork.generated.h"

class UPalAIActionBase;

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_DodgeWork : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> actionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIActionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminateSanityValueOver;
    
public:
    UPalBaseCampWorkerEvent_DodgeWork();
};

