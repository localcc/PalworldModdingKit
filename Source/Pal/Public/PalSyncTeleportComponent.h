#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalSyncTeleportRequestParameter.h"
#include "PalSyncTeleportComponent.generated.h"

class UAkAudioEvent;
class UPalHUDDispatchParameter_FadeWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSyncTeleportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSyncTeleportPlayerMovedDynamicDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncTeleportPlayerMovedDynamicDelegate OnPlayerMovedClientDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncTeleportPlayerMovedDynamicDelegate OnPlayerMoveCompleteClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultStartSE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameter_FadeWidget* FadeParameter;
    
public:
    UPalSyncTeleportComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncTeleport_ToClient(const FPalSyncTeleportRequestParameter& Parameter);
    
public:
    UFUNCTION(BlueprintCallable)
    void SyncTeleport(const FPalSyncTeleportRequestParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncTeleportStart_ToServer(const FPalSyncTeleportRequestParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncTeleportMove_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncTeleportEnd_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSyncTeleportStartResult_ToClient(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSyncTeleportMoveResult_ToClient(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSyncTeleportEnd_ToClient(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSyncTeleportFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSyncTeleportFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION(BlueprintCallable)
    FQuat GetTeleportRotation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetTeleportLocation() const;
    
};

