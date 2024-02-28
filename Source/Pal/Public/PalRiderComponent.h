#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalRidePositionType.h"
#include "EPalWeaponType.h"
#include "FlagContainer.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDeadInfo.h"
#include "RiderActionInfo.h"
#include "Templates/SubclassOf.h"
#include "PalRiderComponent.generated.h"

class AActor;
class AController;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAnimMontage;
class UPalRideMarkerComponent;
class UPalUniqueRideAnimeAssetBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRiderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRide, AActor*, RideActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetOff, AActor*, RideActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRide OnRide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetOff OnGetOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalRideMarkerComponent> RidingMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalRidePositionType, FRiderActionInfo> RideActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* FullRidePalController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RideShakingMontage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableGetOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableAdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableUniqueRideIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultJumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector InitialMeshLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, FVector2D> BackRideLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PalMonsterData, TSubclassOf<UPalUniqueRideAnimeAssetBase>> UniqueRideAnimBPClassMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalUniqueRideAnimeAssetBase*> UniqueRideAnimeAssetMap;
    
public:
    UPalRiderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopShakingMontage();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetRideMarker_ToServer(int32 ID, UPalRideMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetRideMarker_ToALL(int32 ID, UPalRideMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable)
    void SetRideMarker_Internal(UPalRideMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable)
    void SetRideMarker(UPalRideMarkerComponent* Marker);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableUniqueRideIK(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableRide(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGetOff(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAdjustRotation(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void RideClientRep(UPalRideMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable)
    bool Ride(UPalRideMarkerComponent* Marker, bool bIsSkipAnimation);
    
    UFUNCTION(BlueprintCallable)
    void PlayShakingMontage(UAnimMontage* overrideMontage, float PlayRate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartInteractInClient(TScriptInterface<IPalInteractiveObjectComponentInterface> Object);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnStartInteractForServer();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
    UFUNCTION(BlueprintCallable)
    void OnSleepPlayer(int32 LastDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnSleep(int32 LastDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnInactive();
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractInClient();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnEndInteractForServer();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable)
    void OnDeadPlayer(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableRide();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableGetOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableAdjustRotation();
    
private:
    UFUNCTION(BlueprintCallable)
    UPalUniqueRideAnimeAssetBase* GetUniqueRideAnimeAsset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRindingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRiderModelIsBackward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalRideMarkerComponent* GetRideMarker() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOff(bool bIsSkipAnimation, bool bNoAnimCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRidePositionType GetCurrentRidePositionType() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DettachRiderNoAnimation_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DettachRiderNoAnimation_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DettachRiderNoAnimation();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DettachRider_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DettachRider_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DettachRider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUniqueRideIK();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AttachRiderNoAnimation_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AttachRiderNoAnimation_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttachRiderNoAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool AttachRider();
    
};

