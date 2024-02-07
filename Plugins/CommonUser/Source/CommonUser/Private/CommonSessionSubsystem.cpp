#include "CommonSessionSubsystem.h"

UCommonSessionSubsystem::UCommonSessionSubsystem() {
}

void UCommonSessionSubsystem::QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

void UCommonSessionSubsystem::JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request) {
}

void UCommonSessionSubsystem::HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

void UCommonSessionSubsystem::FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request) {
}

UCommonSession_SearchSessionRequest* UCommonSessionSubsystem::CreateOnlineSearchSessionRequest() {
    return NULL;
}

UCommonSession_HostSessionRequest* UCommonSessionSubsystem::CreateOnlineHostSessionRequest() {
    return NULL;
}

void UCommonSessionSubsystem::CleanUpSessions() {
}


