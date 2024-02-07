#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FlagContainer.h"
#include "PalLookAtComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalLookAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtTargetLocation_forActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* LookAtTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtTargetLocation_Interpolated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LookAtTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookAtInInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookAtOutInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer LookAtDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolatedSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShowDebugImage;
    
    UPalLookAtComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopLookAt(float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLookAtForActor(AActor* Actor, FName BoneName, float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLookAt(FVector LookAtTarget, float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtDisable(FName flagName, bool bIsDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeShootState(bool IsAim, bool IsShooting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLookAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtOutInterpTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtInInterpTime() const;
    
};

