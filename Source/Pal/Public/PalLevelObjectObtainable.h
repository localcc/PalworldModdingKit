#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectObtainable.generated.h"

class AActor;
class APalLevelObjectObtainable;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectObtainable : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalLevelObjectObtainable*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdatePickupStatusInClient;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ObtainFXSoftObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPickedInClient;
    
public:
    APalLevelObjectObtainable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFlagMapRecord(const FName Key, const bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetObtainFXLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

