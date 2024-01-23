#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InteractDelegateDelegate.h"
#include "InteractSelfDelegateDelegate.h"
#include "InteractTriggerDelegateDelegate.h"
#include "InteractTriggeringDelegateDelegate.h"
#include "InteractingDelegateDelegate.h"
#include "PalInteractDelegates.generated.h"

UCLASS(Blueprintable)
class UPalInteractDelegates : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractSelfDelegate OnEnableTriggerInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractDelegate OnInteractBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractDelegate OnInteractEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractingDelegate OnInteracting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractTriggerDelegate OnTriggerInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractTriggerDelegate OnStartTriggerInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractTriggerDelegate OnEndTriggerInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractTriggeringDelegate OnTriggeringInteract;
    
    UPalInteractDelegates();
};

