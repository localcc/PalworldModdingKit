#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "CommonUserAvailabilityChangedDelegateDelegate.h"
#include "CommonUserHandleSystemMessageDelegateDelegate.h"
#include "CommonUserInitializeParams.h"
#include "CommonUserOnInitializeCompleteMulticastDelegate.h"
#include "ECommonUserInitializationState.h"
#include "CommonUserSubsystem.generated.h"

class UCommonUserInfo;

UCLASS(Blueprintable, Config=Game)
class COMMONUSER_API UCommonUserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonUserOnInitializeCompleteMulticast OnUserInitializeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonUserHandleSystemMessageDelegate OnHandleSystemMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonUserAvailabilityChangedDelegate OnUserPrivilegeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UCommonUserInfo*> LocalUserInfos;
    
public:
    UCommonUserSubsystem();

    UFUNCTION(BlueprintCallable)
    bool TryToLoginForOnlinePlay(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeUser(FCommonUserInitializeParams Params);
    
    UFUNCTION(BlueprintCallable)
    bool TryToInitializeForLocalPlay(int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldWaitForStartInput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLocalPlayers(int32 InMaxLocalPLayers);
    
    UFUNCTION(BlueprintCallable)
    void SendSystemMessage(FGameplayTag MessageType, FText TitleText, FText BodyText);
    
    UFUNCTION(BlueprintCallable)
    void ResetUserState();
    
    UFUNCTION(BlueprintCallable)
    void ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FCommonUserInitializeParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraitTag(const FGameplayTag TraitTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForPlatformUser(FPlatformUserId PlatformUser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForInputDevice(FInputDeviceId InputDevice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonUserInfo* GetUserInfoForControllerId(int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLocalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLocalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonUserInitializationState GetLocalPlayerInitializationState(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelUserInitialization(int32 LocalPlayerIndex);
    
};

