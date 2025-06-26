#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractEventDelegate.h"
#include "InteractSelfEventDelegate.h"
#include "InteractingEventDelegate.h"
#include "PalInteractiveInterface.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectComponentInterface.generated.h"

class IPalInteractiveObjectIndicatorInterface;
class UPalInteractiveObjectIndicatorInterface;
class UDEPRECATED_PalInteractDelegates;
class UObject;

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalInteractiveObjectComponentInterface : public UPalInteractiveInterface {
    GENERATED_BODY()
};

class IPalInteractiveObjectComponentInterface : public IPalInteractiveInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnInteracting(FInteractingEvent Event) PURE_VIRTUAL(UnbindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnInteractEnd(FInteractEvent Event) PURE_VIRTUAL(UnbindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnInteractBegin(FInteractEvent Event) PURE_VIRTUAL(UnbindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnEnableTriggerInteract(FInteractSelfEvent Event) PURE_VIRTUAL(UnbindOnEnableTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface) PURE_VIRTUAL(SetIndicatorInterface,);
    
    UFUNCTION(BlueprintCallable)
    virtual UObject* Self() const PURE_VIRTUAL(Self, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual FText GetIndicatorText(const UObject* WorldContextObject, EPalInteractiveObjectIndicatorType IndicatorType) const PURE_VIRTUAL(GetIndicatorText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetIndicatorLocation(bool bNoShapeOffset) PURE_VIRTUAL(GetIndicatorLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetIndicatorInfo(FPalInteractiveObjectActionInfoSet& ActionInfo, const FPalInteractiveObjectActionBy& SituationInfo) const PURE_VIRTUAL(GetIndicatorInfo,);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual void EnableTriggerInteract() PURE_VIRTUAL(EnableTriggerInteract,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual void BindOnInteracting(FInteractingEvent Event) PURE_VIRTUAL(BindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnInteractEnd(FInteractEvent Event) PURE_VIRTUAL(BindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnInteractBegin(FInteractEvent Event) PURE_VIRTUAL(BindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnEnableTriggerInteract(FInteractSelfEvent Event) PURE_VIRTUAL(BindOnEnableTriggerInteract,);
    
};

