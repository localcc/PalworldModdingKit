#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectInstantEffectModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectInstantEffectModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid AuthorizedPlayerUid;
    
public:
    UPalMapObjectInstantEffectModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void RequestInstantEffect_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestInstantEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnEnableTriggerInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

