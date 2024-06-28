#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalWazaID.h"
#include "NetworkActorSpawnParameters.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalItemSlotIdAndNum.h"
#include "PalNetArchive.h"
#include "PalNetworkIndividualComponent.generated.h"

class AActor;
class APalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkIndividualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UseItemInSlotToCharacter_ToServer(const FPalInstanceID& ID, const FPalItemSlotIdAndNum SlotAndNum);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhantomActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnIndividualActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RaiseToMainActor_ToServer(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RaiseToMainActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnIndividualActor_ServerInternal(FPalInstanceID ID, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnDespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnDespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void OmCreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter initParameter, FPalInstanceID ID, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyAddedMasteredWaza_ToAll(const FPalInstanceID& ID, EPalWazaID WazaID);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DropToPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DropToPhantomActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void CreateIndividualID_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void CreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void CreateFixedIndividualID_ServerInternal(FPalInstanceID ID, FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastChangeOwnerCharacter_ToAll(FPalInstanceID ID, const FGuid& PlayerUId, FDateTime OwnedTime);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
};

