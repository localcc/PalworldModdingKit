#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EEnterWaterFlag.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalMovementSpeedType.h"
#include "EPalWalkableFloorAnglePriority.h"
#include "FlagContainer.h"
#include "PalCharacterMovementComponent.generated.h"

class APalCharacter;
class UActorComponent;
class UPalCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMovementModeChangedDelegate, UPalCharacterMovementComponent*, Component, TEnumAsByte<EMovementMode>, prevMode, TEnumAsByte<EMovementMode>, newMode, EPalCharacterMovementCustomMode, PrevCustomMode, EPalCharacterMovementCustomMode, NewCustomMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLandedDelegate, UPalCharacterMovementComponent*, Component, const FHitResult&, Hit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpDisable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpDelegate, UPalCharacterMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlyDelegate, UPalCharacterMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitWater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterWater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSwimming, bool, IsInSwimming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSprint, UPalCharacterMovementComponent*, Component, bool, IsInSprint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSliding, UPalCharacterMovementComponent*, Component, bool, IsInSliding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeGroundType, TEnumAsByte<EPhysicalSurface>, CurrentGroundType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeCrouch, UPalCharacterMovementComponent*, Component, bool, IsInCrouch);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementModeChangedDelegate OnMovementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpDelegate OnJumpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlyDelegate OnFlyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLandedDelegate OnLandedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCrouch OnChangeCrouchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSprint OnChangeSprintDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSliding OnChangeSlidingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSwimming OnChangeSwimmingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterWater OnEnterWaterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitWater OnExitWaterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpDisable OnJumpDisableDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeGroundType OnChangeGroundTypeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DyingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatigueMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GliderMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GliderAirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GliderGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingStartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingSubRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableSkySliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrapplingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastLandedTransformCacheNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseLastLandedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> OverrideJumpZVelocityMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MaxAccelerationMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> WalkSpeedMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> YawRotatorMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> GravityZMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> AirControlXYMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> SlideAlphaMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer MoveDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer InputDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer JumpDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DriveMoveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer PysicsAccelerationFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ClientLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer CrouchDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer SlidingDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer GliderDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer SplintDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLandingInputVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> LastLandingLocationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer StepDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer NavWalkDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWalkableFloorAnglePriority, float> WalkableFloorAngleOverridesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SlowWalkSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WalkSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RunSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RideSprintSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TransportSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TemporaryAccelerationTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFlyDashMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultMaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CustomMovementMode_ForReplicate, meta=(AllowPrivateAccess=true))
    EPalCharacterMovementCustomMode CustomMovementMode_ForReplicate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InWaterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashSwimMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpableInWaterDepth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEnterWaterFlag EnteredWaterFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WaterPlaneZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WaterPlaneZPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WaitTimeToSwimInFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDashSwim;
    
public:
    UPalCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartGrappling(const FVector& HitLocation, const FVector& HitNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetYawRotatorMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedByType(FName flagName, EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetupDatabaseSpeedByCharacterId(APalCharacter* InCharacter, FName charaID);
    
    UFUNCTION(BlueprintCallable)
    void SetupDatabaseSpeed(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetStepDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetSplintDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetSlidingDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideAlphaMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPysicsAccelerationFlag(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNavWalkDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAccelerationMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityZMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetGliderDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMaxAccel(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetFlyDashMode_ToServer(bool IsDash);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveMoveFlag(FName flagName, bool IsEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDisableLeftHandAttachFlag(bool isDisable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDashSwimming_ToServer(bool _isDash);
    
    UFUNCTION(BlueprintCallable)
    void SetDashSwimming(bool _isDash);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMovementMode(EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetAirControlXYMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastLandingLocationCache();
    
    UFUNCTION(BlueprintCallable)
    void RequestTemporaryAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomMovementMode_ForReplicate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitWater();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterWater();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeactivated(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCrouch(UPalCharacterMovementComponent* Component, bool IsInCrouch);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActiveCharacter(bool bInIsActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void MergeLastLandingLocationCache(const UPalCharacterMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void Jump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPysicsAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavWalkDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFallingFromSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnteredWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSkySliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriveMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawRotatorMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterPlaneNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterPlaneLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkableFloorAngleByPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlideAlphaMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAccelerationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastLandingLocationFromLastOfCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastLandingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInWaterRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityZMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGrapplingMoveHitLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGrapplingMoveEndLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGrapplingHitNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultRunSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalCharacterMovementCustomMode GetCustomMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAirControlXYMultiplier() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckReturnToNavWakl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGainSP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDashSwimming() const;
    
};

