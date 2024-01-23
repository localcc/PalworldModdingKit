#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "PalBaseCampWorkerEvent_EatTooMuch.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_EatTooMuch : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverSanityTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EatMaxNum;
    
public:
    UPalBaseCampWorkerEvent_EatTooMuch();
};

