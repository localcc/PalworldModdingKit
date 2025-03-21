#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GDKPrivacyPermissionAsyncFunctionDelegate.h"
#include "GDKPrivacyPermissionAsyncFunction.generated.h"

UCLASS(Blueprintable)
class UGDKPrivacyPermissionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKPrivacyPermissionAsyncFunction Completed;
    
    UGDKPrivacyPermissionAsyncFunction();

};

