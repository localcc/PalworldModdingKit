#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalKillLogDisplayData.h"
#include "PalKillLogFilteringWaiter.generated.h"

class UPalKillLogFilteringWaiter;

UCLASS(Blueprintable)
class PAL_API UPalKillLogFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredKillLogDelegate, UPalKillLogFilteringWaiter*, Waiter, const FPalKillLogDisplayData&, Message);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFilteredKillLogDelegate OnFilteredKillLogDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKillLog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalKillLogDisplayData LogData;
    
public:
    UPalKillLogFilteringWaiter();

    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

