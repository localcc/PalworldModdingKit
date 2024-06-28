#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NetworkActorSpawnParameters.h"
#include "NetworkSpawnActorDelegateDelegate.h"
#include "PalNetworkTransmitterDelaySpawnInfo.h"
#include "PalNetworkTransmitter.generated.h"

class UPalNetworkArenaComponent;
class UPalNetworkBaseCampComponent;
class UPalNetworkBossBattleComponent;
class UPalNetworkCharacterComponent;
class UPalNetworkCharacterContainerComponent;
class UPalNetworkCharacterStatusOperationComponent;
class UPalNetworkIndividualComponent;
class UPalNetworkInvaderComponent;
class UPalNetworkItemComponent;
class UPalNetworkMapObjectComponent;
class UPalNetworkPlayerComponent;
class UPalNetworkRaidBossComponent;
class UPalNetworkShopComponent;
class UPalNetworkTimeComponent;
class UPalNetworkWorkProgressComponent;
class UPalNetworkWorldSecurityComponent;

UCLASS(Blueprintable)
class PAL_API APalNetworkTransmitter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkMapObjectComponent* MapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkItemComponent* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkBaseCampComponent* BaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkCharacterContainerComponent* CharacterContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkPlayerComponent* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkCharacterComponent* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkWorkProgressComponent* WorkProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkWorldSecurityComponent* WorldSecurity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkBossBattleComponent* BossBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkTimeComponent* Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkShopComponent* Shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkInvaderComponent* Invader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkCharacterStatusOperationComponent* CharacterStatusOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkRaidBossComponent* RaidBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkArenaComponent* Arena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalNetworkIndividualComponent* NetworkIndividualComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalNetworkTransmitterDelaySpawnInfo> DelayDelegateCallQueue;
    
public:
    APalNetworkTransmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FGuid SpawnReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
    UFUNCTION(BlueprintCallable)
    FGuid SpawnNonReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnNonReliableActor_ToServer(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnedNonReliableActor_ToALL(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnedActor_ToALL(AActor* SpawnedActor, AActor* SpawnedController, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable)
    FGuid SpawnActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnActor_ToServer(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetupBroadcast_FromServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkWorldSecurityComponent* GetWorldSecurity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkWorkProgressComponent* GetWorkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkTimeComponent* GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkShopComponent* GetShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkPlayerComponent* GetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkMapObjectComponent* GetMapObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkItemComponent* GetItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkInvaderComponent* GetInvader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkCharacterStatusOperationComponent* GetCharacterStatusOperation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkCharacterContainerComponent* GetCharacterContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkCharacterComponent* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkBossBattleComponent* GetBossBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkBaseCampComponent* GetBaseCamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNetworkArenaComponent* GetArena() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DummyReliableFunction();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestLogTreasureBoxLocalPlayerAround_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ReceiveLogTreasureBoxLocalPlayerAround_ToRequestPlayer(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_LogServerThreadNum_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_LogServerThreadNum_ToRequestPlayer(const FString& Message);
    
};

