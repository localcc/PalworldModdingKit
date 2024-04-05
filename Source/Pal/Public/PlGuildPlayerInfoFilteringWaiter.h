#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalGuildPlayerInfo.h"
#include "PlGuildPlayerInfoFilteringWaiter.generated.h"

class UPlGuildPlayerInfoFilteringWaiter;

UCLASS(Blueprintable)
class PAL_API UPlGuildPlayerInfoFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredGuildPlayerInfoDelegate, UPlGuildPlayerInfoFilteringWaiter*, Waiter, const FPalGuildPlayerInfo&, FilteredInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFilteredGuildPlayerInfoDelegate OnFilteredGuildPlayerInfoDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalGuildPlayerInfo PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
public:
    UPlGuildPlayerInfoFilteringWaiter();

    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

