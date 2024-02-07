#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GDKInviteAsyncFunctionDelegate.h"
#include "GDKInviteAsyncFunction.generated.h"

class UGDKInviteAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class UGDKInviteAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKInviteAsyncFunction Completed;
    
    UGDKInviteAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UGDKInviteAsyncFunction* GDKInviteAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

