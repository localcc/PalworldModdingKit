#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnPingCompleteDelegate.h"
#include "OnPingFailureDelegate.h"
#include "PingIP.generated.h"

class UPingIP;

UCLASS(Blueprintable, Config=Game)
class POCKETPAIRUSER_API UPingIP : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingComplete OnPingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingFailure OnPingFailure;
    
    UPingIP();

    UFUNCTION(BlueprintCallable)
    void SendPing(const FString& ipAddress);
    
    UFUNCTION(BlueprintCallable)
    void PollThread();
    
    UFUNCTION(BlueprintCallable)
    static UPingIP* ConstructPingObject();
    
};

