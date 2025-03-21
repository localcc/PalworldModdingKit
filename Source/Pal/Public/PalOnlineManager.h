#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalSessionMemberChange.h"
#include "PalOnlineManager.generated.h"

class APalPlayerState;
class UGDKPrivacyPermissionAsyncFunction;
class UGDKPrivacyPermissionForAnonymousUserAsyncFunction;
class UGDKPrivilegeAsyncFunction;

UCLASS(Blueprintable)
class PAL_API UPalOnlineManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberUnBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberMuteDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberLeaveDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberJoinDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberChangedPlayerUIdDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionMemberChangeDelegate, const FString&, UserId, const EPalSessionMemberChange, ChangeType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMemberBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteGetEuraVersionsDelegate, int32, EuraCurrentVersion);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteGetEuraVersionsDelegate OnCompleteGetEuraVersionsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberChangeDelegate OnSessionMemberChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberJoinDelegate OnSessionMemberJoinDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberLeaveDelegate OnSessionMemberLeaveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberMuteDelegate OnSessionMemberMuteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberUnMuteDelegate OnSessionMemberUnMuteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberBlockDelegate OnSessionMemberBlockDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberUnBlockDelegate OnSessionMemberUnBlockDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberChangedPlayerUIdDelegate OnSessionMemberChangedPlayerUIdDelegate;
    
    UPalOnlineManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnSessionMemberChangedPlayerUId(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKUserResolvePrivilegeWithUI(UGDKPrivilegeAsyncFunction* PrivilegeAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKPrivacyCheckPermissionForAnonymousUser(UGDKPrivacyPermissionForAnonymousUserAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryGDKPrivacyCheckPermission(UGDKPrivacyPermissionAsyncFunction* PrivacyPermissionAsyncFunction);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteGetEuraVersions(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

