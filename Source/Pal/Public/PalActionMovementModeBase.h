#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalActionMovementBaseType.h"
#include "EPalActionMovementEndReplicationType.h"
#include "EPalCharacterMovementCustomMode.h"
#include "PalActionBase.h"
#include "PalActionMovementModeBase.generated.h"

class UPalCharacterMovementComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalActionMovementModeBase : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterMovementCustomMode MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalActionMovementBaseType MovementBaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndActionOnMovementModeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalActionMovementEndReplicationType EndReplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFinishVelocityOnEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
public:
    UPalActionMovementModeBase();

    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMode, uint8 NewMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetInterrupt(bool InInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool MovingOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Async_UpdateVelocity(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Async_PhysCustom(float InDeltaTime, int32 Iterations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector K2_Async_GetVelocity(FVector BaseVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector K2_Async_GetFinishVelocity(FVector BaseVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Async_EndMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Async_BeginMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterrupt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncBegun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsApplyFinishVelocityOnEndAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalActionMovementBaseType GetMovementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalCharacterMovementCustomMode GetMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakingDeceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable)
    void CallEndAction(bool InInterrupt);
    
};

