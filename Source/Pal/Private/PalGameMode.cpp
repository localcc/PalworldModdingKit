#include "PalGameMode.h"

APalGameMode::APalGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalGameMode::RestartGame() {
}

void APalGameMode::RespawnPlayer(int32 PlayerIndex) {
}

void APalGameMode::OnUpdateSession(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void APalGameMode::OnServerLobbyUpdate() const {
}

void APalGameMode::OnEOSLoginDedicatedServerComplete(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void APalGameMode::OnCompleteCreateSession(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void APalGameMode::InitDedicatedServer() {
}

void APalGameMode::CreateSession(const FString& Address) {
}


