#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalLoginManager.generated.h"

class UPocketpairUserInfo;

UCLASS(Blueprintable)
class UPalLoginManager : public UObject {
    GENERATED_BODY()
public:
    UPalLoginManager();

    UFUNCTION(BlueprintCallable)
    void OnSwitchUserUICompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginEOSCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAlert_Login(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmAlert_EOSLogin(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishLogin();
    
};

