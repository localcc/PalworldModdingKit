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
#include "PalItemSlotIdAndNum.h"
#include "PalNetArchive.h"
#include "PalNetworkIndividualComponent.generated.h"

class AActor;
class APalCharacter;
class UPalStaticConsumeItemData;
class UPalStaticItemDataBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkIndividualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UseItemInSlotToCharacter_ToServer(const FPalInstanceID& ID, const FPalItemSlotIdAndNum SlotAndNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UseGainStatusPointsItem_ToServer(const FPalInstanceID& ID, const FName ItemId, const int32 Num);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateCharacterParameter_ToAll(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhantomActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnIndividualActor_ToALL(FPalInstanceID ID, AActor* Actor, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnIndividualActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
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
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyAddedMasteredWaza_ToAll(const FPalInstanceID& ID, EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LevelUp_ToServer(const FPalInstanceID& ID, int32 Level);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GainExp_ToServer(const FPalInstanceID& ID, int32 Exp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EatItem_ToServer(const FPalInstanceID& ID, const UPalStaticConsumeItemData* ItemData, int32 Num);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DropToPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DropToPhantomActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DespawnPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DespawnIndividualActor_ToALL(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void DespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CreateIndividualID_ToALL(FPalIndividualCharacterSaveParameter initParameter, FPalInstanceID ID, FGuid Guid);
    
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
    void AddTalent_ToServer(const FPalInstanceID& ID, const UPalStaticItemDataBase* ItemData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddRank_ToServer(const FPalInstanceID& ID, const UPalStaticItemDataBase* ItemData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddPlayerCharacterStatusPoint_ToServer(const FPalInstanceID& ID, const TArray<FPalGotStatusPoint>& AddStatusPointArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddMasteredWaza_ToServer(const FPalInstanceID& ID, EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddEquipWaza_ToServer(const FPalInstanceID& ID, const EPalWazaID NewWaza);
    
};

