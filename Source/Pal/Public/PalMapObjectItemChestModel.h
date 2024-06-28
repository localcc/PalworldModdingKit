#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalMapObjectItemChestModel.generated.h"

class UPalMapObjectItemChestModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectItemChestModel : public UPalMapObjectItemStorageModel, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectItemChestModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdatePrivateLockPlayerUIdDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrivateLockPlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PrivateLockPlayerUId;
    
public:
    UPalMapObjectItemChestModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUnlockPrivate_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUnlockPrivate();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestLockPrivate_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestLockPrivate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLocalPlayerPasswordLockInfo(const FPalMapObjectPasswordLockPlayerInfo& OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo& NewLocalPlayerInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PrivateLockPlayerUId(const FGuid& OldPrivateLockPlayerUId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveRequestLockPrivateConfirm(const bool bOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateByNotLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateByNot(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateBy(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivate() const;
    

    // Fix for true pure virtual functions not being implemented
};

