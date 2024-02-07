#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedJoinSessionFunctionDelegate.h"
#include "JoinSessionAsyncFunction.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UJoinSessionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedJoinSessionFunction Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
public:
    UJoinSessionAsyncFunction();

};

