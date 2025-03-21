#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalFishingRodState.h"
#include "PalFishingRodInitParameter.h"
#include "PalFishingRodModule.generated.h"

class APalCharacter;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API UPalFishingRodModule : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRodStateDelegate, EPalFishingRodState, RodState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeRodStateDelegate OnChangeRodStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableShootSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReserveFishingLureLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FishingLureLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFishingRodState FishingRodState;
    
public:
    UPalFishingRodModule();

    UFUNCTION(BlueprintCallable)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowLine();
    
    UFUNCTION(BlueprintCallable)
    void ShotCable();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFishingAction();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAction(const UPalActionBase* action);
    
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
    void Initialize(const FPalFishingRodInitParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHitFishingTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelFishing();
    
};

