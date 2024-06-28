#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "EPalBaseCampWorkerDirectorState.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalBaseCampWorkAssignRequest.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalOptionWorldSettings.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalBaseCampWorkerDirector.generated.h"

class APalCharacter;
class UPalBaseCampModel;
class UPalBaseCampWorkerDirectorBattle;
class UPalBaseCampWorkerTaskBase;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalBaseCampWorkerDirector : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovedWorkerDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddNewWorkerDelegate, UPalIndividualCharacterHandle*, NewCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddNewWorkerDelegate OnAddNewWorkerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovedWorkerDelegate OnRemovedWorkerInServerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterContainer, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* CharacterContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMapBaseCampWorkerOrderType CurrentOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerDirectionBattleType CurrentBattleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterSlotsObserver* SlotObserverForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampWorkerDirectorBattle* BattleDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampWorkAssignRequest> RequiredAssignWorks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> WaitingWorkerIndividualIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WorkerEventTickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampWorkerTaskBase*> WorkerTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerDirectorState State;
    
public:
    UPalBaseCampWorkerDirector();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateOwnerBaseCampStatus_ServerInternal(UPalBaseCampModel* OwnerBaseCamp);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedCharacterInServer(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRequiredAssignWork_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterContainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemovedNewCharacterInServer(const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnReflectSlotCompleteInServer();
    
    UFUNCTION(BlueprintCallable)
    void OnRaisedPhantomCharacterInServer(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadWorkerInServer_Internal(APalCharacter* DeadCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadWorkerInServer(const FPalDeadInfo Info);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeWorldSettings_ServerInternal(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAddedNewCharacterInServer(const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterHandleSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* FindSlotByHandle(UPalIndividualCharacterHandle* Handle) const;
    
};

