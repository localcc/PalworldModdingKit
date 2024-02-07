#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SanitizeDisplayNameAsyncFunctionDelegate.h"
#include "SanitizeDisplayNameAsyncFunction.generated.h"

class UPocketpairUserSubsystem;
class USanitizeDisplayNameAsyncFunction;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API USanitizeDisplayNameAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSanitizeDisplayNameAsyncFunction Completed;
    
    USanitizeDisplayNameAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static USanitizeDisplayNameAsyncFunction* SanitizeDisplayNameAsyncFunction(UPocketpairUserSubsystem* Target, const FString& InString);
    
};

