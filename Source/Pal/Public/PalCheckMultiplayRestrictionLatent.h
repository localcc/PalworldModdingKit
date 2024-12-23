#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PalCheckMultiplayRestrictionLatentOnCompletedDelegateDelegate.h"
#include "PalCheckMultiplayRestrictionLatent.generated.h"

class UObject;
class UPalCheckMultiplayRestrictionLatent;

UCLASS(Blueprintable)
class PAL_API UPalCheckMultiplayRestrictionLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCheckMultiplayRestrictionLatentOnCompletedDelegate OnCompleted;
    
    UPalCheckMultiplayRestrictionLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalCheckMultiplayRestrictionLatent* PalCheckMultiplayRestrictionLatent(UObject* WorldContextObject);
    
};

