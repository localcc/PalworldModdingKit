#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalCharacterSlotId.h"
#include "PalNetworkNPCTalkRequestData.h"
#include "PalNetworkQuestComponent.generated.h"

class APalLevelObjectQuestItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkQuestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestProgressQuest_ToServer(const FName& QuestId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOrderQuest_ToServer(const FName& OrderQuestId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOrderInitialQuest_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestCompleteQuest_ToServer(const FName& QuestId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RefreshQuest_ForDebug();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyOrderedQuest_ToClient(const FName& QuestId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyOpenSurvivalGuide_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyGetSkinRewardUI_ToClient(const FName& SkinName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyCompleteQuest_ToClient(const FName& QuestId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GetQuestItem_LevelObject(APalLevelObjectQuestItem* LevelObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DisplayOtomo_NPCTalk_ToServer(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeliveryPal_NPCTalk_ToServer(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData, const TArray<FPalCharacterSlotId>& DeliverySlotIdArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeliveryItem_NPCTalk_ToServer(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData);
    
};

