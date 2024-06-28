#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameDateTime.h"
#include "PalChatMessage.h"
#include "PalGameState.h"
#include "PalGameStateInGame.generated.h"

class APalBotBuilderLocationBase;
class APalNetworkTransmitter;
class UPalBaseCampReplicator;
class UPalCharacterManagerReplicator;
class UPalGameSystemInitManagerComponent;
class UPalLocationReplicator;
class UPalOptionReplicator;
class UPalStageReplicator;
class UPalSupplySpawnerData;

UCLASS(Blueprintable, MinimalAPI)
class APalGameStateInGame : public APalGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedServerNoticeDelegate, const FString&, NoticeMessage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedChatMessageDelegate, const FPalChatMessage&, Message);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterManagerReplicator, meta=(AllowPrivateAccess=true))
    UPalCharacterManagerReplicator* CharacterManagerReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BaseCampReplicator, meta=(AllowPrivateAccess=true))
    UPalBaseCampReplicator* BaseCampReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OptionReplicator, meta=(AllowPrivateAccess=true))
    UPalOptionReplicator* OptionReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StageReplicator, meta=(AllowPrivateAccess=true))
    UPalStageReplicator* StageReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LocationReplicator, meta=(AllowPrivateAccess=true))
    UPalLocationReplicator* LocationReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalNetworkTransmitter* DedicatedServerTransmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalGameSystemInitManagerComponent* GameSystemInitManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalBotBuilderLocationBase*> BotBuilderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WorldSaveDirectoryName, meta=(AllowPrivateAccess=true))
    FString WorldSaveDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameDateTime WorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime RealUtcTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString ServerSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerWildMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerOtomoMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerBaseCampMonsterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerNPCCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerOtherCharacterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_AllUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_Nearest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_MidInSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_FarInSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_MidOutSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_FarOutSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ImportanceCharacterCount_Farthest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BaseCampCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NavMeshInvokerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UPalSupplySpawnerData*> SupplySpawnerDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorldOceanPlaneZ;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalChatMessage> ChatMessages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecievedChatMessageDelegate OnRecievedChatMessageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecievedServerNoticeDelegate OnRecievedServerNoticeDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveConfigCategoryName;
    
public:
    APalGameStateInGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWorldOceanPlaneZ(const float InZ);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldSaveDirectoryName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StageReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OptionReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LocationReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterManagerReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseCampReplicator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWorldSaveDirectoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWorldName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerFrameTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastServerNotice(const FString& NoticeMessage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastChatMessage(const FPalChatMessage& ChatMessage);
    
};

