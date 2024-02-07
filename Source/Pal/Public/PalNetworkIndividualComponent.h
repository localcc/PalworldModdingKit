#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalWazaID.h"
#include "NetworkActorSpawnParameters.h"
#include "PalGotStatusPoint.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalNetArchive.h"
#include "PalNetworkIndividualComponent.generated.h"

class AActor;
class APalCharacter;
class UPalStaticConsumeItemData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkIndividualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateCharacterParameter_ToServer(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateCharacterParameter_ToAll(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateCharacterNickName_ToServer(const FPalInstanceID& ID, const FString& newNickName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnPhantomActor_ToServer(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnIndividualActor_ToServer(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnIndividualActor_ToALL(FPalInstanceID ID, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetWorkerSick_ToServer(const FPalInstanceID& ID, EPalBaseCampWorkerSickType SickType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ResetStatusPoint_ToServer(const FPalInstanceID& ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplaceEquipWaza_ToServer(const FPalInstanceID& ID, const EPalWazaID OldWaza, const EPalWazaID NewWaza);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveEquipWaza_ToServer(const FPalInstanceID& ID, const EPalWazaID TargetWaza);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RaiseToMainActor_ToServer(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RaiseToMainActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EatItem_ToServer(const FPalInstanceID& ID, const UPalStaticConsumeItemData* ItemData, const int32 Num);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropToPhantomActor_ToServer(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DropToPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DespawnPhantomActor_ToServer(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DespawnPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DespawnIndividualActor_ToServer(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DespawnIndividualActor_ToALL(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CreateIndividualID_ToServer(FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CreateIndividualID_ToALL(FPalIndividualCharacterSaveParameter initParameter, FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void CreateIndividualID_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CreateFixedIndividualID_ToServer(FPalInstanceID ID, FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastChangeOwnerCharacter_ToAll(FPalInstanceID ID, const FGuid& PlayerUId, FDateTime OwnedTime);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddPlayerCharacterStatusPoint_ToServer(const FPalInstanceID& ID, const TArray<FPalGotStatusPoint>& AddStatusPointArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddMasteredWaza_ToServer(const FPalInstanceID& ID, EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddEquipWaza_ToServer(const FPalInstanceID& ID, const EPalWazaID NewWaza);
    
};

