#include "PalGameStateInGame.h"
#include "Net/UnrealNetwork.h"
#include "PalGameSystemInitManagerComponent.h"

APalGameStateInGame::APalGameStateInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterManagerReplicator = NULL;
    this->BaseCampReplicator = NULL;
    this->OptionReplicator = NULL;
    this->StageReplicator = NULL;
    this->LocationReplicator = NULL;
    this->DedicatedServerTransmitter = NULL;
    this->GameSystemInitManager = CreateDefaultSubobject<UPalGameSystemInitManagerComponent>(TEXT("GameSystemInitManager"));
    this->bIsDedicatedServer = false;
    this->MaxPlayerNum = 0;
    this->ServerFrameTime = -1.00f;
    this->ServerWildMonsterCount = -1;
    this->ServerOtomoMonsterCount = -1;
    this->ServerBaseCampMonsterCount = -1;
    this->ServerNPCCount = -1;
    this->ServerOtherCharacterCount = -1;
    this->ImportanceCharacterCount_AllUpdate = -1;
    this->ImportanceCharacterCount_Nearest = -1;
    this->ImportanceCharacterCount_Near = -1;
    this->ImportanceCharacterCount_MidInSight = -1;
    this->ImportanceCharacterCount_FarInSight = -1;
    this->ImportanceCharacterCount_MidOutSight = -1;
    this->ImportanceCharacterCount_FarOutSight = -1;
    this->ImportanceCharacterCount_Farthest = -1;
    this->BaseCampCount = -1;
    this->NavMeshInvokerCount = -1;
    this->WorldOceanPlaneZ = -1048575.00f;
    this->SaveConfigCategoryName = TEXT("JoinGameSettings");
}

void APalGameStateInGame::SetWorldOceanPlaneZ(const float InZ) {
}

void APalGameStateInGame::OnRep_WorldSaveDirectoryName() {
}

void APalGameStateInGame::OnRep_StageReplicator() {
}

void APalGameStateInGame::OnRep_OptionReplicator() {
}

void APalGameStateInGame::OnRep_LocationReplicator() {
}

void APalGameStateInGame::OnRep_CharacterManagerReplicator() {
}

void APalGameStateInGame::OnRep_BaseCampReplicator() {
}

FString APalGameStateInGame::GetWorldSaveDirectoryName() const {
    return TEXT("");
}

FString APalGameStateInGame::GetWorldName() const {
    return TEXT("");
}

float APalGameStateInGame::GetServerFrameTime() const {
    return 0.0f;
}

int32 APalGameStateInGame::GetMaxPlayerNum() const {
    return 0;
}

void APalGameStateInGame::BroadcastServerNotice_Implementation(const FString& NoticeMessage) {
}

void APalGameStateInGame::BroadcastChatMessage_Implementation(const FPalChatMessage& ChatMessage) {
}

void APalGameStateInGame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalGameStateInGame, CharacterManagerReplicator);
    DOREPLIFETIME(APalGameStateInGame, BaseCampReplicator);
    DOREPLIFETIME(APalGameStateInGame, OptionReplicator);
    DOREPLIFETIME(APalGameStateInGame, StageReplicator);
    DOREPLIFETIME(APalGameStateInGame, LocationReplicator);
    DOREPLIFETIME(APalGameStateInGame, WorldName);
    DOREPLIFETIME(APalGameStateInGame, WorldSaveDirectoryName);
    DOREPLIFETIME(APalGameStateInGame, bIsDedicatedServer);
    DOREPLIFETIME(APalGameStateInGame, MaxPlayerNum);
    DOREPLIFETIME(APalGameStateInGame, WorldTime);
    DOREPLIFETIME(APalGameStateInGame, RealUtcTime);
    DOREPLIFETIME(APalGameStateInGame, ServerFrameTime);
    DOREPLIFETIME(APalGameStateInGame, ServerSessionId);
    DOREPLIFETIME(APalGameStateInGame, ServerWildMonsterCount);
    DOREPLIFETIME(APalGameStateInGame, ServerOtomoMonsterCount);
    DOREPLIFETIME(APalGameStateInGame, ServerBaseCampMonsterCount);
    DOREPLIFETIME(APalGameStateInGame, ServerNPCCount);
    DOREPLIFETIME(APalGameStateInGame, ServerOtherCharacterCount);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_AllUpdate);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_Nearest);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_Near);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_MidInSight);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_FarInSight);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_MidOutSight);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_FarOutSight);
    DOREPLIFETIME(APalGameStateInGame, ImportanceCharacterCount_Farthest);
    DOREPLIFETIME(APalGameStateInGame, BaseCampCount);
    DOREPLIFETIME(APalGameStateInGame, NavMeshInvokerCount);
    DOREPLIFETIME(APalGameStateInGame, SupplySpawnerDataList);
}


