#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GDKPrivacyPermissionForAnonymousUserAsyncFunctionDelegate.h"
#include "GDKPrivacyPermissionForAnonymousUserAsyncFunction.generated.h"

UCLASS(Blueprintable)
class UGDKPrivacyPermissionForAnonymousUserAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKPrivacyPermissionForAnonymousUserAsyncFunction Completed;
    
    UGDKPrivacyPermissionForAnonymousUserAsyncFunction();

};

