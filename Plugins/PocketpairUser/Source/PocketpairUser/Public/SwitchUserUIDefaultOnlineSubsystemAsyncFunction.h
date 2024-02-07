#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedSwitchUserUIFunctionDelegate.h"
#include "SwitchUserUIDefaultOnlineSubsystemAsyncFunction.generated.h"

class UPocketpairUserSubsystem;
class USwitchUserUIDefaultOnlineSubsystemAsyncFunction;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API USwitchUserUIDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedSwitchUserUIFunction Completed;
    
    USwitchUserUIDefaultOnlineSubsystemAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static USwitchUserUIDefaultOnlineSubsystemAsyncFunction* SwitchUserUIAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

