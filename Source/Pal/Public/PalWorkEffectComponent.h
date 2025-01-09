#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "PalInstanceID.h"
#include "PalWorkEffectComponent.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalWorkEffectComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveFX, meta=(AllowPrivateAccess=true))
    bool bActiveFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWorkFacingChild;
    
public:
    UPalWorkEffectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveFX();
    
};

