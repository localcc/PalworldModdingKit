#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedCreateSessionFunctionDelegate.h"
#include "CreateSessionAsyncFunction.generated.h"

class UCreateSessionAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UCreateSessionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedCreateSessionFunction Completed;
    
    UCreateSessionAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UCreateSessionAsyncFunction* CreateSessionAsyncFunction(UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, const FString& InviteCode, const FString& ServerName, const FString& Desc, const FString& ServerAddress, int32 ServerPort, bool IsPassword, const FString& Version, const FString& ServerType, const FString& Region, const FString& Namespace);
    
};

