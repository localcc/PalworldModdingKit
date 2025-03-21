#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalFishingComponent.generated.h"

class UPalFishingRodModule;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFishingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartQTEDelegate, int32, Min, int32, Max);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndQTEDelegate, bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelFishingDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartFishingDelegate OnStartFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndFishingDelegate OnEndFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelFishingDelegate OnCancelFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCatchBattleDelegate OnStartCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessCatchBattleDelegate OnSuccessCatchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedCatchBattleDelegate OnFailedCatchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartQTEDelegate OnStartQTEDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndQTEDelegate OnEndQTEDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFishingRodModule* FishingRodModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
public:
    UPalFishingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessFight();
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessCatchBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnStartQTE(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedFishingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFishingCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFishingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedFight();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedCatchBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnEndQTE(bool IsSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFishingButtonPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatchBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerInputFishingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalFishingRodModule* GetFishingRodModule() const;
    
};

