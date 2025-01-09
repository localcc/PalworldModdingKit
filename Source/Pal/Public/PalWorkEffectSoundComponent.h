#pragma once
#include "CoreMinimal.h"
#include "PalAkComponent.h"
#include "PalInstanceID.h"
#include "PalWorkEffectSoundComponent.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalWorkEffectSoundComponent : public UPalAkComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveFX, meta=(AllowPrivateAccess=true))
    bool bActiveFX;
    
public:
    UPalWorkEffectSoundComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveFX(const bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedInProgress(UPalWorkProgress* WorkProgress);
    
};

