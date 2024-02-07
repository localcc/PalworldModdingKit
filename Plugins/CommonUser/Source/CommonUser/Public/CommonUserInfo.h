#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserInitializationState.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "ECommonUserPrivilegeResult.h"
#include "CommonUserInfo.generated.h"

UCLASS(Blueprintable)
class COMMONUSER_API UCommonUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputDeviceId PrimaryInputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformUserId PlatformUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeGuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonUserInitializationState InitializationState;
    
    UCommonUserInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonUserAvailability GetPrivilegeAvailability(ECommonUserPrivilege Privilege) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetNetId(ECommonUserOnlineContext Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonUserPrivilegeResult GetCachedPrivilegeResult(ECommonUserPrivilege Privilege, ECommonUserOnlineContext Context) const;
    
};

