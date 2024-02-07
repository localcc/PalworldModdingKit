#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CancellableAsyncAction.h"
#include "CommonUserOnInitializeCompleteMulticastDelegate.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "AsyncAction_CommonUserInitialize.generated.h"

class UAsyncAction_CommonUserInitialize;
class UCommonUserInfo;
class UCommonUserSubsystem;

UCLASS(Blueprintable)
class COMMONUSER_API UAsyncAction_CommonUserInitialize : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonUserOnInitializeCompleteMulticast OnInitializationComplete;
    
    UAsyncAction_CommonUserInitialize();

    UFUNCTION(BlueprintCallable)
    static UAsyncAction_CommonUserInitialize* LoginForOnlinePlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_CommonUserInitialize* InitializeForLocalPlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializationComplete(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
};

