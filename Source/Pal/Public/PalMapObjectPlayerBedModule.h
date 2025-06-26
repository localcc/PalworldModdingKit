#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPlayerBedModule.generated.h"

class APalCharacter;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPlayerBedModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* SleepingCharacter;
    
public:
    UPalMapObjectPlayerBedModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestTriggerSleepPlayerBed_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestTriggerGetupPlayerBed_ToServer(const int32 TargetPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTriggerSleepPlayerBedSuccess_ToClient();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTriggerGetupPlayerBedSuccess_ToClient();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerActionBegin(const UPalActionBase* ActionBase);
    
    UFUNCTION(BlueprintCallable)
    void OnGetupTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSleep();
    
    UFUNCTION(BlueprintCallable)
    void OnDamagePlayer(FPalDamageResult DamageResult);
    
};

