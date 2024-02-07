#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonSessionOnCreateSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnJoinSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnUserRequestedSession_DynamicDelegate.h"
#include "CommonSessionSubsystem.generated.h"

class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;

UCLASS(Blueprintable)
class COMMONUSER_API UCommonSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnUserRequestedSession_Dynamic K2_OnUserRequestedSessionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnJoinSessionComplete_Dynamic K2_OnJoinSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnCreateSessionComplete_Dynamic K2_OnCreateSessionCompleteEvent;
    
    UCommonSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request);
    
    UFUNCTION(BlueprintCallable)
    void HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    void FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpSessions();
    
};

