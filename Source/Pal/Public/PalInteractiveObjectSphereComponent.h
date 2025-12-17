#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractEventDelegate.h"
#include "InteractSelfEventDelegate.h"
#include "InteractingEventDelegate.h"
#include "OnCreateInteractDelegatesDelegate.h"
#include "OnCreateInteractDelegatesMultiCastDelegate.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectComponentInterface.h"
#include "PalInteractiveObjectSphereComponent.generated.h"

class AActor;
class IPalInteractiveObjectIndicatorInterface;
class UPalInteractiveObjectIndicatorInterface;
class UDEPRECATED_PalInteractDelegates;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractiveObjectSphereComponent : public USphereComponent, public IPalInteractiveObjectComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableTriggerInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImplementedTriggerInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableInteractingTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableInteractingTickInClientOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference IndicatorOriginRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedTraceToPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectIndicatorInterface> IndicatorInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateInteractDelegatesMultiCast OnCreateInteractDelegatesDelegate;
    
public:
    UPalInteractiveObjectSphereComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetIndicatorLocation(bool bNoShapeOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableTriggerInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCreateInteractDelegates(FOnCreateInteractDelegates Delegate);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteracting(FInteractingEvent Event) override PURE_VIRTUAL(UnbindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteractEnd(FInteractEvent Event) override PURE_VIRTUAL(UnbindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteractBegin(FInteractEvent Event) override PURE_VIRTUAL(UnbindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnEnableTriggerInteract(FInteractSelfEvent Event) override PURE_VIRTUAL(UnbindOnEnableTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    UObject* Self() const override PURE_VIRTUAL(Self, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FText GetIndicatorText(const UObject* WorldContextObject, EPalInteractiveObjectIndicatorType IndicatorType) const override PURE_VIRTUAL(GetIndicatorText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    void GetIndicatorInfo(FPalInteractiveObjectActionInfoSet& ActionInfo, const FPalInteractiveObjectActionBy& SituationInfo) const override PURE_VIRTUAL(GetIndicatorInfo,);

    UFUNCTION(BlueprintCallable)
    void BindOnInteracting(FInteractingEvent Event) override PURE_VIRTUAL(BindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnInteractEnd(FInteractEvent Event) override PURE_VIRTUAL(BindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnInteractBegin(FInteractEvent Event) override PURE_VIRTUAL(BindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnEnableTriggerInteract(FInteractSelfEvent Event) override PURE_VIRTUAL(BindOnEnableTriggerInteract,);
    
};

