#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalPlayerPlatform.h"
#include "EPalUserPrivilege.h"
#include "PalOptionOnlineIds.h"
#include "PalOnlineUtility.generated.h"

class APalPlayerState;
class UObject;

UCLASS(Blueprintable)
class PAL_API UPalOnlineUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalOnlineUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnMutePlayer(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnBlockPlayer(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowWebURL(const UObject* WorldContextObject, const FString& InURL);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowProfileUI(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetDisplayTermsOfService(const UObject* WorldContextObject, int32 InNumber);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestGetEuraVersions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool MutePlayer(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenListenServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsMutePlayerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutMute);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsMutePlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutMute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDisplayTermsOfService(const UObject* WorldContextObject, int32 InNumber);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDenyCommunicationByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutDeny);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDenyCommunication(const UObject* WorldContextObject, const FString& UserId, bool& bOutDeny);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsBlockPlayerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutBlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsBlockPlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUserIdByPlayerUIdInSession(const UObject* WorldContextObject, FGuid InPlayerUId, FString& OutUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayerUIdByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId, FGuid& OutPlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerState* GetPlayerStateByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EPalPlayerPlatform GetPlayerPlatformByUserId(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerNicknameByUserId(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerNameByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FPalOptionOnlineIds> GetMutePlayerList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FPalOptionOnlineIds> GetBlockPlayerList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckUserResolvePrivilege(const UObject* WorldContextObject, const EPalUserPrivilege Privilege, bool UIOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BlockPlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutKicked);
    
};

