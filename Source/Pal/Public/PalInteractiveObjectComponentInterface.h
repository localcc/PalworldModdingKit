#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveInterface.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectComponentInterface.generated.h"

class IPalInteractiveObjectIndicatorInterface;
class UPalInteractiveObjectIndicatorInterface;
class UObject;
class UPalInteractDelegates;

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalInteractiveObjectComponentInterface : public UPalInteractiveInterface {
    GENERATED_BODY()
};

class IPalInteractiveObjectComponentInterface : public IPalInteractiveInterface {
    GENERATED_BODY()
public:
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
    virtual UPalInteractDelegates* Delegates() const PURE_VIRTUAL(Delegates, return NULL;);
    
};

