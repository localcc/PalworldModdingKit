#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalFishingRodState.h"
#include "PalFishingRodInitParameter.h"
#include "PalFishingRodModule.generated.h"

class APalCharacter;
class APalFishShadow;
class APalFishingSpotArea;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API UPalFishingRodModule : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickFishDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecreaseDurabilityDelegate, float, DecreaseValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTargetSpotDelegate, APalFishingSpotArea*, TargetSpot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRodStateDelegate, EPalFishingRodState, RodState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeRodStateDelegate OnChangeRodStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecreaseDurabilityDelegate OnDecreaseDurabilityDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTargetSpotDelegate OnChangeTargetSpotDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FishingFloatLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFishingRodState FishingRodState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalFishingSpotArea* TargetSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalFishShadow* PreTargetFishShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalFishShadow* TargetFishShadow;
    
public:
    UPalFishingRodModule();

    UFUNCTION(BlueprintCallable)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShotCable();
    
    UFUNCTION(BlueprintCallable)
    void SetFloatLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWaitPick();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFishingAction();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAction(const UPalActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void OnPickStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndFishingAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDetachWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFishingAction() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalFishingRodInitParameter& Parameter, APalCharacter* InActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalFishShadow* GetTargetFishShadow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFloatLocation() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugShowLine();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHitFishingTarget();
    
    UFUNCTION(BlueprintCallable)
    void CancelFishing();
    
};

