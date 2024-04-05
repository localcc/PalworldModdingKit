#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentState.h"
#include "PalIncidentInitializeParameter.h"
#include "PalIncidentNotifyParameter.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalIncidentSystem.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UDataTable;
class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameter;
class UPalIncidentList;
class UPalIncidentNotifyListener;

UCLASS(Blueprintable)
class PAL_API UPalIncidentSystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIncidentStateNotify, EPalIncidentState, IncidentState, const FPalIncidentNotifyParameter&, Parameter);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ResidentIncidentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UPalIncidentBase>> IncidentClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IncidentParameterDataTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIncidentStateNotify OnIncidentStateNotifyDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentBase*> WaitingIncidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentBase*> ExecuteIncidents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentBase*> ResidentIncidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentNotifyListener*> Listeners;
    
public:
    UPalIncidentSystem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkCustomFunction_AttackToPlayer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const UDataTable* CunstomFuncParam);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalIncidentList* RequestIncidents(const TArray<FName>& Incidents, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalIncidentBase* RequestIncident(FName IncidentId, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyIncidentState(EPalIncidentState NotifyType, const FPalIncidentNotifyParameter& Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void LotteryItemAndNum(const UDataTable* PresentLotteryDataTable, FName& OutItemName, int32& OutNum) const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsIncidentBeginAllowed(UPalIncidentBase* Incident);
    
    UFUNCTION(BlueprintCallable)
    UPalIncidentBase* GenerateIncident(FPalIncidentInitializeParameter& InitializeParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStopByOwner(UObject* OwnerObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByOccuredObject(UObject* OccuredObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByIncidentType(FName IncidentType);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopByIncidentId(FName IncidentId);
    
};

