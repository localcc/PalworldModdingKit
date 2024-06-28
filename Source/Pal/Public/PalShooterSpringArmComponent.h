#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EPalWeaponType.h"
#include "FixedPoint64.h"
#include "FloatContainer.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalOptionGraphicsSettings.h"
#include "PalSpringArmComponent.h"
#include "ShooterSpringCameraAdditionalOffset.h"
#include "ShooterSpringCameraParameter.h"
#include "PalShooterSpringArmComponent.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class APalWeaponBase;
class UCurveFloat;
class UPalCharacterMovementComponent;
class UPalCharacterParameterComponent;
class UPalDamageReactionComponent;
class UPalShooterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalShooterSpringArmComponent : public UPalSpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingCameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LengthInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OffsetInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WalkCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipShootCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, FShooterSpringCameraParameter> DefaultWeaponStandCameraParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APalWeaponBase>, FShooterSpringCameraParameter> UniqueWeaponStandCameraParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AirCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirHipShootCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AirHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AirAimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlyCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyHipShootCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlyHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlyAimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CrouchCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchHipShootCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CrouchHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CrouchAimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlidingCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingHipShootCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlidingHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlidingAimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeadCameraOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFixedPoint64 PrevPlayerHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultCameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalShooterComponent* ShooterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterMovementComponent* MoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterParameterComponent* ParameterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalDamageReactionComponent* DamageReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatContainer ArmLengthScaleContainer;
    
public:
    UPalShooterSpringArmComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateCameraInterp(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterAdditionalOffsets();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAdditionalOffset(const FName& flgName);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLengthScale(FName flagName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraInterp();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraDirection();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAdditionalOffset(const FShooterSpringCameraAdditionalOffset& Offset);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnPullTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJump(UPalCharacterMovementComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnFly(UPalCharacterMovementComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable)
    void OnDyingDeadEnd(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteInitializeParameter(APalCharacter* InCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeSliding(UPalCharacterMovementComponent* Component, bool IsSliding);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeShootState(bool IsAim, bool IsShooting);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCrouch(UPalCharacterMovementComponent* Component, bool isCrouch);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentCameraOffset() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCameraArmLength() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeArmParameter_forBP();
    
};

