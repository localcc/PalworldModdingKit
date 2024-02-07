#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalEventNotifyTriggerHitDelegateDelegate.h"
#include "PalTriggerAreaBase.generated.h"

UCLASS(Blueprintable)
class APalTriggerAreaBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyTriggerHitDelegate OnTriggerHitBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyTriggerHitDelegate OnTriggerHitEndDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
public:
    APalTriggerAreaBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetInstanceId();
    
};

