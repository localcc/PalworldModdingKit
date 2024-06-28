#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectPasswordLockState.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalNetArchive.h"
#include "PalMapObjectPasswordLockModule.generated.h"

class UPalMapObjectPasswordLockModule;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPasswordLockModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectPasswordLockModule*, Module);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndPasswordMulticastDelegate, UPalMapObjectPasswordLockModule*, Module, const FString&, Password);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnPlayerInfoDelegate, const FPalMapObjectPasswordLockPlayerInfo&, OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo&, NewLocalPlayerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyAuthenticationResultDelegate, bool, passed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateLockStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyAuthenticationResultDelegate OnAuthenticationResultNotifyDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectPasswordLockState LockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectPasswordLockPlayerInfo> PlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TryAuthenticateMaxNum;
    
public:
    UPalMapObjectPasswordLockModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateUnlock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePassword_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePassword(const FString& NewPassword);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateLock(const EPalMapObjectPasswordLockState NewLockState);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenUIPasswordSetting();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestAuthenticate_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestAuthenticate(const FString& InputPassword);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenuSecuritySetting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerInfos(const TArray<FPalMapObjectPasswordLockPlayerInfo>& OldValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyAuthenticationResult(const bool passed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectPasswordLockState GetLockState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTryAuthenticateByPlayer(const FGuid& RequestPlayerUId) const;
    
};

