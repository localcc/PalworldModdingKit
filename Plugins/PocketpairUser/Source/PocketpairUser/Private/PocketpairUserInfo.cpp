#include "PocketpairUserInfo.h"

UPocketpairUserInfo::UPocketpairUserInfo() {
}

FName UPocketpairUserInfo::GetOnlineSubsystemName() const {
    return NAME_None;
}

FString UPocketpairUserInfo::GetNickname() const {
    return TEXT("");
}

FUniqueNetIdRepl UPocketpairUserInfo::GetNetId() const {
    return FUniqueNetIdRepl{};
}

FString UPocketpairUserInfo::GetDebugString() const {
    return TEXT("");
}


