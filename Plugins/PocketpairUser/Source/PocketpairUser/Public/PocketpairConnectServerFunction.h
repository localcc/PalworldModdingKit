#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PocketpairConnectServerFunctionDelegate.h"
#include "PocketpairConnectServerFunction.generated.h"

class UPocketpairConnectServerFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UPocketpairConnectServerFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPocketpairConnectServerFunction Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPocketpairUserSubsystem* Subsystem;
    
public:
    UPocketpairConnectServerFunction();

    UFUNCTION(BlueprintCallable)
    static UPocketpairConnectServerFunction* ConnectServer(UPocketpairUserSubsystem* Target, const FString& Address, int32 Port, const FString& AdminPassword, const FString& ServerPassword, const FString& WorldGUID);
    
};

