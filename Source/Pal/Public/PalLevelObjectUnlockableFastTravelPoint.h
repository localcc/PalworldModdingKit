#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectUnlockableFastTravelPoint.generated.h"

class AActor;
class APalLevelObjectUnlockableFastTravelPoint;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectUnlockableFastTravelPoint : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalLevelObjectUnlockableFastTravelPoint*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateUnlockStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableRequestUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FastTravelPointID;
    
public:
    APalLevelObjectUnlockableFastTravelPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFlagMapRecord(const FName Key, const bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAkAudioEvent* GetUnlockAkAudioEvent();
    

    // Fix for true pure virtual functions not being implemented
};

