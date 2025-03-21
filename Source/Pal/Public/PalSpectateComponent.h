#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalSpectateInternalState.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalSpectateComponent.generated.h"

class APalPlayerController;
class APalPlayerState;
class APalSpectatorPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSpectateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnBeginSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnEndSpectateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalPlayerController* CachedOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalSpectatorPawn* SpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalSpectateInternalState InternalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAdminMode;
    
public:
    UPalSpectateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerVerifyNextPlayer(int32 Direction, bool bCheckCurrentIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSyncSpectatorLocation(FVector NewLoc, FRotator NewRot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerForceEndSpectate(bool bUpdateEnvironment);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEndSpectate();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginSpectate(bool bInAdminMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdminMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndSpectate(bool bUpdateEnvironment);
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerTeleport();
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerSlipDamaged(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerExitStage();
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerEnterStage();
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void EventOnPlayerDamaged(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVerifyNextPlayer(APalPlayerState* Next, FVector NextLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceEndSpectate(bool bUpdateEnvironment);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientChangeInternalState(EPalSpectateInternalState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeSpectateMoveSpeed(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void BeginSpectate(bool bInAdminMode);
    
};

