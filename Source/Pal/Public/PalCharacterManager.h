#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "NetworkActorSpawnParameters.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalCharacterManager.generated.h"

class UPalActionBase;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterHandleReference;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalCharacterManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FIndividualPhantomIDCallback, FPalInstanceID, ID, int32, PhantomId);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FIndividualIDCallback, FPalInstanceID, ID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterParameterAddedDelegate, FPalInstanceID, InstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterHandleDelegate, UPalIndividualCharacterHandle*, CharacterHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterParameterAddedDelegate OnIndividualParameterSynced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> AttackNearBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> AttackFarBaseClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, UPalIndividualCharacterParameter*> IndividualParameterMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, TWeakObjectPtr<UPalIndividualCharacterHandle>> WeakIndividualHandleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> InitializeWaitingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> NoHoldHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, UPalIndividualCharacterHandleReference*> CachedRefenrenceOnlyHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> CreatingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> SpawningActorHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> ReserveDestroyActorHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> CachedIndividualParameterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FPalInstanceID> LoadedCharacterIDs;
    
public:
    UPalCharacterManager();

    UFUNCTION(BlueprintCallable)
    void SpawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNewCharacterWithInitializeParameterCallback(FPalIndividualCharacterSaveParameter initParameter, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNewCharacter(FPalIndividualCharacterSaveParameter initParameter, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCharacterByHandleWithInitializeParameterCallback(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void RaiseToMainActor(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback Callback);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreateIndividualID(FPalInstanceID ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandleReference* GetIndividualHandleReference(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetIndividualHandleFromCharacterParameter(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetIndividualHandle(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* GetIndividualCharacterParameter(const FPalInstanceID& IndividualId) const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void DespawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* CreateIndividualByFixedID(FPalInstanceID ID, FPalIndividualCharacterSaveParameter initParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* CreateIndividual(FPalIndividualCharacterSaveParameter initParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    

    // Fix for true pure virtual functions not being implemented
};

