#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EPalSkeletalMeshType.h"
#include "EPalSkeletalTickLayer.h"
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalSkeletalMeshComponent.generated.h"

class UPalSkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppliedMakeInfoDelegate, const UPalSkeletalMeshComponent*, SkeletalMeshComponent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClavicleAdjustDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomURO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableGroundTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltingInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator DefaultRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BeginTiltVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EndTiltVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TiltTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EvaluationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEvaluationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalTickInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppliedMakeInfoDelegate OnAppliedMakeInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer ScaleFloatContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer PitchFloatContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer AnimRateScaleFloatContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultAnimRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultScale3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSkeletalMeshType PalSkeletalMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharcterMakeMorphMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BodyTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisableChangeMesh_ByPlayerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVisibilityBasedAnimTickOption DefaultTickOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerDataCharacterMakeInfo CharacterMakeInfo;
    
public:
    UPalSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpdateRate(float InRate, bool bResetCurrentInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetTiltDisable(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeScale(FName flagName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimePitch(FName flagName, float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeAnimRateScale(FName flagName, float RateScale);
    
    UFUNCTION(BlueprintCallable)
    void SetEvaluationRate(float InRate, bool bResetCurrentInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRagdollCCD(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeMesh(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ResetTransformToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableTilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpdateRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalSkeletalMeshType GetPalSkeletalMeshType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEvaluationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimRateScale();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibilityAnimTick(EPalSkeletalTickLayer SkeletalTickLayer);
    
};

