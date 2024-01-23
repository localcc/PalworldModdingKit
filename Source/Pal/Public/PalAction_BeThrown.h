#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_BeThrown.generated.h"

class UAnimMontage;
class UNiagaraComponent;

UCLASS(Blueprintable)
class UPalAction_BeThrown : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    UPalAction_BeThrown();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayThrownMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayThrownFX();
    
};

