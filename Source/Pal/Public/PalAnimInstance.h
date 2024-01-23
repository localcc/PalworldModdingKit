#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "GeneralAnimationParameter.h"
#include "ReserveMontage.h"
#include "Templates/SubclassOf.h"
#include "PalAnimInstance.generated.h"

class UAnimMontage;
class UPalBoneInfo;

UCLASS(Blueprintable, NonTransient)
class UPalAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageNotifyEnd, UAnimMontage*, Montage, FName, NotifyName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageNotifyBegin, UAnimMontage*, Montage, FName, NotifyName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageNotifyBegin OnMontageNotifyBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageNotifyEnd OnMontageNotifyEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAnimInstance>> ImplementationClassList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneralAnimationParameter GeneralAnimationParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRotateYawInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateYawInterpolation_Acceleration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalBoneInfo*> BoneListFullBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalBoneInfo*> BoneListOnlySpines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReserveMontage> ReservedMontageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer AdditiveAnimationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableUpperOverrideFlag;
    
public:
    UPalAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetUpperOverrideDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveAnimationRate(FName flagName, float Rate);
    
private:
    UFUNCTION()
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedCallback(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void Montage_PlayList(TArray<FReserveMontage> montageList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNearBoneInSpines(FVector fromPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNearBoneInFullBody(FVector fromPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMontagePlayTimeToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBoneTransform(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetBoneRotationComponentSpace(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetBoneRotation(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBonePosition(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBoneInfo* GetBoneInfo(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void CalcLength(FName Target, FName nextBone, float tipLength);
    
    UFUNCTION(BlueprintCallable)
    void BodyInstance_SetSimulate(FName BoneName, bool SimulateActive);
    
    UFUNCTION(BlueprintCallable)
    void AddSpinesListFromBoneList(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddList(FName BoneName);
    
};

