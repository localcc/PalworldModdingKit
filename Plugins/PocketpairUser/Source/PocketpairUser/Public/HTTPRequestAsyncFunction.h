#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncHTTPRequestFunctionDelegate.h"
#include "HTTPRequestAsyncFunction.generated.h"

class UHTTPRequestAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UHTTPRequestAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncHTTPRequestFunction Completed;
    
    UHTTPRequestAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UHTTPRequestAsyncFunction* HTTPRequestAsyncFunction(UPocketpairUserSubsystem* Target, const FString& URL, const FString& Verb);
    
};

