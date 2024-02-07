#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedLoginEOSFunctionDelegate.h"
#include "LoginEOSAsyncFunction.generated.h"

class ULoginEOSAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API ULoginEOSAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedLoginEOSFunction Completed;
    
    ULoginEOSAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static ULoginEOSAsyncFunction* LoginEOSAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

