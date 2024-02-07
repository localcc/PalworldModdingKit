#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedFindSessionsFunctionDelegate.h"
#include "FindSessionsAsyncFunction.generated.h"

class UFindSessionsAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UFindSessionsAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedFindSessionsFunction Completed;
    
    UFindSessionsAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UFindSessionsAsyncFunction* FindSessionsAsyncFunction(UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const FString& InviteCode, const FString& ServerType, const FString& Region, const int32 LessThanTime, const FString& WorldGUID, const FString& Namespace);
    
};

