#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalBossType.h"
#include "EPalPlayerInventoryType.h"
#include "EPalStageRequestResult.h"
#include "PalItemSlotId.h"
#include "PalStageInstanceId.h"
#include "Templates/SubclassOf.h"
#include "PalNetworkPlayerComponent.generated.h"

class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalItemSlot;
class UPalLoadoutSelectorComponent;
class UPalQuestData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowUnlockHardModeUI_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowBossDefeatRewardUI_ToClient(int32 TechPoint, bool AfterTeleport, int32 DelayTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCurrentSelectPalSphereIndex_ToServer(int32 NextIndex, UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnlockTechnology_ToServer(const FName& UnlockTechnologyName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSortInventory_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItemToInventoryFromSlot(UPalItemSlot* fromSlot, bool IsTryEquip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItemToInventoryFromContainer(UPalItemContainer* fromContainer, bool IsTryEquip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitStage_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterStage_ToServer(const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDropOtomoPal_ToServer(const int32 OtomoIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeVoiceID_ToServer(int32 NewVoiceID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddTechnolgyPoint_ToServer(const int32 AddPoint);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddItem_ToServer(const FName StaticItemId, const int32 Count, bool IsAssignPassive);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddBossTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RegisterRespawnLocation_ToServer(const FGuid& PlayerUId, const FVector& Location);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveExitStageRequestResult_ToRequestClient(const EPalStageRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveEnterStageRequestResult_ToRequestClient(const FPalStageInstanceId& StageInstanceId, const EPalStageRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyUnlockAchievement_ToClient(const FString& AchievementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStartCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReportCriminal_ToClient(UPalIndividualCharacterHandle* CriminalHandle, const TArray<FName>& CrimeIds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReleaseWanted_ToClient(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyQuestCompleted(TSubclassOf<UPalQuestData> CompletedQuestDataClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyEndCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadoutSelectorRemoveEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadoutSelectorEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector, EPalPlayerInventoryType inventoryType, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByIndex_ToServer(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByDataLayer_ToServer(const FName DataLayerName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonTreasureBox_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonGoal_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToBossTower_ToServer(EPalBossType BossType);
    
};

