#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalArenaMenuActionType.h"
#include "EPalArenaRank.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalArenaRule.h"
#include "PalArenaSoloClearItemInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalArenaWorldSubsystem.generated.h"

class APalArenaEntrance;
class APalArenaSoloNPCSpawner;
class APalArenaWorldRankingInfo;
class APalPlayerCharacter;
class UDataLayerAsset;
class UDataTable;
class UPalArenaInstanceModel;
class UPalArenaSequencer;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalArenaWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIRequestRepliedDelegate, EPalArenaMenuActionType, ActionType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIRequestRepliedDelegate OnUIRequestRepliedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerAsset*> DataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalArenaSequencer> ArenaSequencerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalArenaSequencer> ArenaSpectateSequencerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InBattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypesToSubPals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SoloNPCPresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SoloRewadTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalArenaSoloNPCSpawner> SoloNPCSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalArenaWorldRankingInfo> ArenaWorldRankingInfoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalArenaWorldRankingInfo* ArenaWorldRankingInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalArenaInstanceModel*> InstanceModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalArenaEntrance* ArenaEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
public:
    UPalArenaWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestExitSpectate();
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterArenaSolo(const EPalArenaRank Rank);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterArena(const FGuid& ArenaRoomId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateArenaRoom(const FPalArenaRule& ArenaRule);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelEntryArena(APalPlayerCharacter* CancelPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSoloNPCSpawned(APalArenaSoloNPCSpawner* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleEndTime_ServerInternal(FDateTime BattleEndTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalArenaSoloClearItemInfo> GetSoloClearReward(EPalArenaRank Rank, bool bIsFirstClear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaSequencer* GetLocalPlayerSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalArenaWorldRankingInfo* GetArenaWorldRankingInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArenaBattleTime();
    
    UFUNCTION(BlueprintCallable)
    void ForceStageExitAll();
    
    UFUNCTION(BlueprintCallable)
    void ExitArena(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void ExitAllByInstanceId(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};

