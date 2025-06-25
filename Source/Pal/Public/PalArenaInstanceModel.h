#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalArenaInstanceState.h"
#include "EPalArenaRank.h"
#include "PalArenaRule.h"
#include "PalStageInstanceId.h"
#include "PalArenaInstanceModel.generated.h"

class APalArenaLevelInstance;
class APalArenaSoloNPCSpawner;
class APalPlayerCharacter;
class UDataLayerAsset;
class UPalArenaSequencer;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalArenaInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleEndTimeDelegate, FDateTime, BattleEndTime);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ArenaInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RepFieldWarpPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform FieldWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ItemDropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime BattleEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalArenaInstanceState ArenaInstanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaSequencer* LocalArenaSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaSequencer* LocalArenaSpectateSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalArenaLevelInstance> WeakArenaLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> EntryPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> Spectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaRank SoloModeRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalArenaSoloNPCSpawner* SoloNPCSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalArenaRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ArenaRoomId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllIndividualCharacterParameters, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> AllIndividualCharacterParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InBattleTime;
    
public:
    UPalArenaInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartInBattleTimer_ServerInternal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AllIndividualCharacterParameters();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded_ForClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFieldWarpPointLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalArenaRule GetArenaRule() const;
    
    UFUNCTION(BlueprintCallable)
    FGuid GetArenaRoomId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalArenaLevelInstance* GetArenaLevelInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaInstanceState GetArenaInstanceState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetArenaInstanceId() const;
    
};

