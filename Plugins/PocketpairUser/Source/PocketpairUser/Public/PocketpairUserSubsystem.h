#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SocialId.h"
#include "PocketpairUserSubsystem.generated.h"

class APlayerController;
class UPocketpairUserInfo;

UCLASS(Blueprintable, Config=Game)
class POCKETPAIRUSER_API UPocketpairUserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPocketpairUserInfo* LocalUserInfo;
    
public:
    UPocketpairUserSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const FString& ID, float Percent);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionInviteReceived(const FString& InviteCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTelemetryUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTelemetrySessionId() const;
    
    UFUNCTION(BlueprintCallable)
    FSocialId GetSocialId(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveDataUserId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNo(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPingResultCache(const FString& Address);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPocketpairUserInfo* GetLocalUserInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInviteCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDefaultOnlineSubsystemName() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPingResultCache(const FString& Address, int32 Ping);
    
};

