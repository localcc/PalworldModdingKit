#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalLogType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalInvaderSaveData.h"
#include "PalInvaderStartPointInfo.h"
#include "PalWorldSubsystem.h"
#include "PalInvaderManager.generated.h"

class AActor;
class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameterInvader;
class UPalInvaderBaseCampObserver;
class UPalInvaderIncidentBase;

UCLASS(Blueprintable)
class PAL_API UPalInvaderManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(AActor*, FSpawnDummyNavInvokerDelegate, FTransform, Transform);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderStartDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderOnArrivedDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInvaderEndDelegate, const FPalIncidentBroadcastParameter&, Parameter);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnDummyNavInvokerDelegate SpawnDummyNavInvokerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderStartDelegate OnInvaderStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderEndDelegate OnInvaderEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderOnArrivedDelegate OnInvaderArrivedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInvaderStartPointInfo> InvadeStartLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalInvaderBaseCampObserver*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalInvaderIncidentBase*> Incidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StartInvaderLogId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInvaderSaveData> InvaderSaveDataMapCache;
    
public:
    UPalInvaderManager();
    UFUNCTION(BlueprintCallable)
    void VisitorTravelTest();
    
    UFUNCTION(BlueprintCallable)
    void VisitorTravelLog(EPalLogType logType);
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable)
    void StartInvaderMarchAll();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnDummyNavInvoker(const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool RequestIncidentVisitorNPC(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(UObject* OccuredBaseCamp, UPalIncidentDynamicParameterInvader* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool RequestIncidentInvaderEnemy(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInvaderIncident(UPalIncidentBase* Incident);
    

    // Fix for true pure virtual functions not being implemented
};

