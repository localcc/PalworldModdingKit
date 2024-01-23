#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_SleepPlayerBed.generated.h"

UCLASS(Blueprintable)
class UPalAction_SleepPlayerBed : public UPalActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGetupTriggerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetupTriggerDelegate OnGetupTriggerDelegate;
    
    UPalAction_SleepPlayerBed();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetupPlayerBedFromModel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSleepLooping() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetupBroadcast();
    
};

