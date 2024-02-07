#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectGateModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectGateModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime UnlockDateTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, TWeakObjectPtr<UPalIndividualCharacterParameter>> WeakInteractingCharacterParameters;
    
public:
    UPalMapObjectGateModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestTrigger_ServerInternal(const int32 RequestPlayerId, const int32 ToStateInt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

