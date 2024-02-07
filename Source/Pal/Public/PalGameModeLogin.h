#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeLogin.generated.h"

class UPocketpairUserInfo;

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameModeLogin : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeLogin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSwitchUserUICompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginEOSCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAlert_MultiplayRestricted(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAlert_EOSLogin(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseEalryAccess(bool _);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToTitle();
    
};

