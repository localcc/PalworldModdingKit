#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalArenaBattleResult.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaPlayerInitializeParameter.h"
#include "PalArenaPlayerParty.h"
#include "PalNetworkArenaComponent.generated.h"

class UPalArenaInstanceModel;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkArenaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkArenaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateParty_ToClient(EPalArenaPlayerIndex PlayerIndex, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetParty_ToServer(const FGuid& ArenaInstanceId, const FPalArenaPlayerParty& ArenaPlayerParty);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStartArena_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterArena_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemovePlayerFromArena_ToClient(UPalIndividualCharacterParameter* RemovePlayeParameter, bool bIsDisconnect);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStartArena_ToClient(UPalArenaInstanceModel* InstanceModel, const TArray<FPalArenaPlayerInitializeParameter>& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifySequenceEnd_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyBattleResult_ToClient(EPalArenaBattleResult ArenaBattleResult, bool bIsTimeup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExitPlayerFromResult_ToServer(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AdvanceSequence_ToClient();
    
};

