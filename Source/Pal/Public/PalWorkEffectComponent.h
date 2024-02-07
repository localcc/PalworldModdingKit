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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveFX, meta=(AllowPrivateAccess=true))
    bool bActiveFX;
    
public:
    UPalWorkEffectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveFX();
    
};

