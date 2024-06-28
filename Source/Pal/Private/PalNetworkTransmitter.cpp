#include "PalNetworkTransmitter.h"
#include "Components/SceneComponent.h"
#include "PalNetworkArenaComponent.h"
#include "PalNetworkBaseCampComponent.h"
#include "PalNetworkBossBattleComponent.h"
#include "PalNetworkCharacterComponent.h"
#include "PalNetworkCharacterContainerComponent.h"
#include "PalNetworkCharacterStatusOperationComponent.h"
#include "PalNetworkIndividualComponent.h"
#include "PalNetworkInvaderComponent.h"
#include "PalNetworkItemComponent.h"
#include "PalNetworkMapObjectComponent.h"
#include "PalNetworkPlayerComponent.h"
#include "PalNetworkRaidBossComponent.h"
#include "PalNetworkShopComponent.h"
#include "PalNetworkTimeComponent.h"
#include "PalNetworkWorkProgressComponent.h"
#include "PalNetworkWorldSecurityComponent.h"

APalNetworkTransmitter::APalNetworkTransmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Never;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootComponent"));
    this->MapObject = CreateDefaultSubobject<UPalNetworkMapObjectComponent>(TEXT("MapObject"));
    this->Item = CreateDefaultSubobject<UPalNetworkItemComponent>(TEXT("Item"));
    this->BaseCamp = CreateDefaultSubobject<UPalNetworkBaseCampComponent>(TEXT("BaseCamp"));
    this->CharacterContainer = CreateDefaultSubobject<UPalNetworkCharacterContainerComponent>(TEXT("CharacterContainer"));
    this->Player = CreateDefaultSubobject<UPalNetworkPlayerComponent>(TEXT("Player"));
    this->Character = CreateDefaultSubobject<UPalNetworkCharacterComponent>(TEXT("Character"));
    this->WorkProgress = CreateDefaultSubobject<UPalNetworkWorkProgressComponent>(TEXT("WorkProgress"));
    this->WorldSecurity = CreateDefaultSubobject<UPalNetworkWorldSecurityComponent>(TEXT("WorldSecurity"));
    this->BossBattle = CreateDefaultSubobject<UPalNetworkBossBattleComponent>(TEXT("BossBattle"));
    this->Time = CreateDefaultSubobject<UPalNetworkTimeComponent>(TEXT("Time"));
    this->Shop = CreateDefaultSubobject<UPalNetworkShopComponent>(TEXT("Shop"));
    this->Invader = CreateDefaultSubobject<UPalNetworkInvaderComponent>(TEXT("Invader"));
    this->CharacterStatusOperation = CreateDefaultSubobject<UPalNetworkCharacterStatusOperationComponent>(TEXT("CharacterStatusOperation"));
    this->RaidBoss = CreateDefaultSubobject<UPalNetworkRaidBossComponent>(TEXT("RaidBoss"));
    this->Arena = CreateDefaultSubobject<UPalNetworkArenaComponent>(TEXT("Arena"));
    this->NetworkIndividualComponent = CreateDefaultSubobject<UPalNetworkIndividualComponent>(TEXT("NetworkIndividualComponent"));
}

FGuid APalNetworkTransmitter::SpawnReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate) {
    return FGuid{};
}

FGuid APalNetworkTransmitter::SpawnNonReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate) {
    return FGuid{};
}

void APalNetworkTransmitter::SpawnNonReliableActor_ToServer_Implementation(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID) {
}

void APalNetworkTransmitter::SpawnedNonReliableActor_ToALL_Implementation(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID) {
}

void APalNetworkTransmitter::SpawnedActor_ToALL_Implementation(AActor* SpawnedActor, AActor* SpawnedController, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

FGuid APalNetworkTransmitter::SpawnActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate) {
    return FGuid{};
}

void APalNetworkTransmitter::SpawnActor_ToServer_Implementation(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

void APalNetworkTransmitter::SetupBroadcast_FromServer_Implementation() {
}

UPalNetworkWorldSecurityComponent* APalNetworkTransmitter::GetWorldSecurity() const {
    return NULL;
}

UPalNetworkWorkProgressComponent* APalNetworkTransmitter::GetWorkProgress() const {
    return NULL;
}

UPalNetworkTimeComponent* APalNetworkTransmitter::GetTime() const {
    return NULL;
}

UPalNetworkShopComponent* APalNetworkTransmitter::GetShop() const {
    return NULL;
}

UPalNetworkPlayerComponent* APalNetworkTransmitter::GetPlayer() const {
    return NULL;
}

UPalNetworkMapObjectComponent* APalNetworkTransmitter::GetMapObject() const {
    return NULL;
}

UPalNetworkItemComponent* APalNetworkTransmitter::GetItem() const {
    return NULL;
}

UPalNetworkInvaderComponent* APalNetworkTransmitter::GetInvader() const {
    return NULL;
}

UPalNetworkCharacterStatusOperationComponent* APalNetworkTransmitter::GetCharacterStatusOperation() const {
    return NULL;
}

UPalNetworkCharacterContainerComponent* APalNetworkTransmitter::GetCharacterContainer() const {
    return NULL;
}

UPalNetworkCharacterComponent* APalNetworkTransmitter::GetCharacter() const {
    return NULL;
}

UPalNetworkBossBattleComponent* APalNetworkTransmitter::GetBossBattle() const {
    return NULL;
}

UPalNetworkBaseCampComponent* APalNetworkTransmitter::GetBaseCamp() const {
    return NULL;
}

UPalNetworkArenaComponent* APalNetworkTransmitter::GetArena() const {
    return NULL;
}

void APalNetworkTransmitter::DummyReliableFunction_Implementation() {
}

void APalNetworkTransmitter::Debug_RequestLogTreasureBoxLocalPlayerAround_ToServer_Implementation() {
}

void APalNetworkTransmitter::Debug_ReceiveLogTreasureBoxLocalPlayerAround_ToRequestPlayer_Implementation(const FString& Message) {
}

void APalNetworkTransmitter::Debug_LogServerThreadNum_ToServer_Implementation() {
}

void APalNetworkTransmitter::Debug_LogServerThreadNum_ToRequestPlayer_Implementation(const FString& Message) {
}


