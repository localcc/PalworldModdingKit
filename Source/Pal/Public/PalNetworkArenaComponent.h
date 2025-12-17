#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalArenaEntryRequestResult.h"
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaRank.h"
#include "PalArenaBattleResultInfo.h"
#include "PalArenaMatchingPlayerInfo.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaRule.h"
#include "PalArenaSequencerInitializeParameter.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalNetworkArenaComponent.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkArenaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkArenaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateParty_ToClient(EPalArenaPlayerIndex PlayerIndex, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncBattleEndTimeToClient(FDateTime BattleEndTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetParty_ToServer(const FGuid& ArenaInstanceId, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStartArenaSpectateToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStartArenaSolo_ToServer(EPalArenaRank ArenaRank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStartArena_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMyWorldArenaRank();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitArenaSpectateToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterArena_ToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestCreateRoomArena_ToServer(const FPalArenaRule& ArenaRule);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestArenaRule_PreEnter_ToServer(const FGuid& ArenaRoomId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemovePlayerFromArena_ToClient(UPalIndividualCharacterParameter* RemovePlayeParameter, bool bIsComplete);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveMyWorldArenaRank(FPalArenaWorldRankingRecord RankInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveExitArenaSpectate_ToClient(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveEnterArenaSpectateResult_ToClinet(EPalArenaEntryRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveEnterArenaResult_ToClinet(EPalArenaEntryRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStartArenaSpectate_ToClient(const FPalArenaSequencerInitializeParameter& InitializeParameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStartArena_ToClient(const FPalArenaSequencerInitializeParameter& InitializeParameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifySequenceEnd_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyFailedStartArenaByOverConcurrentStageLimitationToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyEndArenaSpectate_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyBattleResultInfo_ToClient(const FPalArenaBattleResultInfo& ArenaBattleResultInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyArenaRoomRule_ToClient(bool bIsSuccess, const FPalArenaRule& Rule, const FGuid& ArenaRoomId, const FPalArenaMatchingPlayerInfo& MatchingPlayerInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExitPlayerSoloMode_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExitPlayerFromResult_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AdvanceSequence_ToClient();
    
};

