#pragma once
#include "CoreMinimal.h"
#include "PalChatMessage.h"
#include "PalUserWidget.h"
#include "PalUIChat.generated.h"

class UPalChatFilteringWaiter;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIChat : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedFilteredMessageDelegate, const FPalChatMessage&, Message);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecievedFilteredMessageDelegate OnRecievedFilteredMessageDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalChatFilteringWaiter*> FilteringWaiterArray;
    
public:
    UPalUIChat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReceivedChat(const FPalChatMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredChat(UPalChatFilteringWaiter* Waiter, const FPalChatMessage& Message);
    
};

