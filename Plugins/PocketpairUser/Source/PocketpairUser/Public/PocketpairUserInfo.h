#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PocketpairUserInfo.generated.h"

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UPocketpairUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPocketpairUserInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOnlineSubsystemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetNetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
};

