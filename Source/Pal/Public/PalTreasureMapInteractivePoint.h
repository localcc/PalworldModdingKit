#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalPlayerTreasureMapPointDataItem.h"
#include "PalTreasureMapInteractivePoint.generated.h"

class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;
class UPalPlayerTreasureMapPointData;

UCLASS(Blueprintable)
class PAL_API APalTreasureMapInteractivePoint : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerLevelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupAkEvent;
    
public:
    APalTreasureMapInteractivePoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualByPointDataItem(const FPalPlayerTreasureMapPointDataItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveForPlayerInteract(const bool bActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRemovePointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteLocalPlayerSetup(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedActorLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAddedOrChangedPointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId);
    

    // Fix for true pure virtual functions not being implemented
};

