#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIWorkerSimpleDetailCanvas.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorkerSimpleDetailCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIWorkerSimpleDetailCanvas();
protected:
    UFUNCTION(BlueprintCallable)
    void UnbindWorkerEvent(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnbindBaseCampEvent(UPalBaseCampModel* targetCampModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestOpenDetail(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestCloseDetail();
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractWorker(AActor* Actor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractWorker(AActor* Actor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
    UFUNCTION(BlueprintCallable)
    void OnAddedNewWorker(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel();
    
    UFUNCTION(BlueprintCallable)
    void BindWorkerEvent(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable)
    void BindBaseCampEvent(UPalBaseCampModel* targetCampModel);
    
};

