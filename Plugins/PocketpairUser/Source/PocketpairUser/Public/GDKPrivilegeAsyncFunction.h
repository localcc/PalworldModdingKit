#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GDKPrivilegeAsyncFunctionDelegate.h"
#include "GDKPrivilegeAsyncFunction.generated.h"

UCLASS(Blueprintable)
class UGDKPrivilegeAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKPrivilegeAsyncFunction Completed;
    
    UGDKPrivilegeAsyncFunction();

};

