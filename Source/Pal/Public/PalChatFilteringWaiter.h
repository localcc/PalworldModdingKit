#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalChatMessage.h"
#include "PalChatFilteringWaiter.generated.h"

class UPalChatFilteringWaiter;

UCLASS(Blueprintable)
class PAL_API UPalChatFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredChatMessageDelegate, UPalChatFilteringWaiter*, Waiter, const FPalChatMessage&, Message);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFilteredChatMessageDelegate OnFilteredChatMessageDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalChatMessage ChatData;
    
public:
    UPalChatFilteringWaiter();

    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

