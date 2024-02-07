#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GDKActivityAsyncFunctionDelegate.h"
#include "GDKActivityAsyncFunction.generated.h"

class UGDKActivityAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS(Blueprintable)
class POCKETPAIRUSER_API UGDKActivityAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKActivityAsyncFunction Completed;
    
    UGDKActivityAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UGDKActivityAsyncFunction* GDKActivityAsyncFunction(UPocketpairUserSubsystem* Target, const FString& ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum);
    
};

