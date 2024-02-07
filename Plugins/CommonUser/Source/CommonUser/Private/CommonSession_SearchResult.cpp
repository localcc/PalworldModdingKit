#include "CommonSession_SearchResult.h"

UCommonSession_SearchResult::UCommonSession_SearchResult() {
}

void UCommonSession_SearchResult::GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const {
}

int32 UCommonSession_SearchResult::GetPingInMs() const {
    return 0;
}

int32 UCommonSession_SearchResult::GetNumOpenPublicConnections() const {
    return 0;
}

int32 UCommonSession_SearchResult::GetNumOpenPrivateConnections() const {
    return 0;
}

int32 UCommonSession_SearchResult::GetMaxPublicConnections() const {
    return 0;
}

void UCommonSession_SearchResult::GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const {
}

FString UCommonSession_SearchResult::GetDescription() const {
    return TEXT("");
}


