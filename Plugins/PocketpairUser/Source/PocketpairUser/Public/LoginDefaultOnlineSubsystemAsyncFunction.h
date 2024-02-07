#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedLoginFunctionDelegate.h"
#include "LoginDefaultOnlineSubsystemAsyncFunction.generated.h"

class ULoginDefaultOnlineSubsystemAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API ULoginDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedLoginFunction Completed;
    
    ULoginDefaultOnlineSubsystemAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static ULoginDefaultOnlineSubsystemAsyncFunction* LoginDefaultAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

