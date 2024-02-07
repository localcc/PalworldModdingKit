#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PocketpairFriend.generated.h"

UCLASS(Blueprintable)
class UPocketpairFriend : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPocketpairFriend();

    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetNetId();
    
};

