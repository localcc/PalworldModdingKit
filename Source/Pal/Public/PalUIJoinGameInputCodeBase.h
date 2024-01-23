#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionResultType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIJoinGameInputCodeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIJoinGameInputCodeBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CahcedInputInviteCode;
    
public:
    UPalUIJoinGameInputCodeBase();
protected:
    UFUNCTION(BlueprintCallable)
    void VerifyPassword(const FString& InputPassword);
    
    UFUNCTION(BlueprintCallable)
    void VerifyInviteCode(const FString& InputCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyVerifyPassword(bool IsMatchPassword);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyVerifyInviteCode(bool IsValidCode, bool IsRequirePassword);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
};

