#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDamageResult.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalMapObjectPlayerBedModel.generated.h"

class AActor;
class ACharacter;
class UPalActionBase;
class UPalAction_SleepPlayerBed;
class UPalIndividualCharacterHandle;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPlayerBedModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAuthority;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACharacter* SleepingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAction_SleepPlayerBed* SleepPlayerBedAction;
    
public:
    UPalMapObjectPlayerBedModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestTriggerSleepPlayerBed_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestTriggerGetupPlayerBed_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTriggerSleepPlayerBedSuccess(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTriggerGetupPlayerBedSuccess(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PutPlayerToSleep(UPalIndividualCharacterHandle* CharacterHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerActionBegin(const UPalActionBase* ActionBase);
    
    UFUNCTION(BlueprintCallable)
    void OnGetupTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSleep();
    
    UFUNCTION(BlueprintCallable)
    void OnDispose(UPalMapObjectModel* MapObjectModel, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagePlayer(FPalDamageResult DamageResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTriggerInteract_SleepPlayerBed(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
};

