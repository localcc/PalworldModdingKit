#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampModuleObjectMaintenance.generated.h"

class UPalBaseCampModuleObjectMaintenance_WayBase;
class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleObjectMaintenance : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampModuleObjectMaintenance_WayBase*> MaintenanceWayDOs;
    
public:
    UPalBaseCampModuleObjectMaintenance();
private:
    UFUNCTION(BlueprintCallable)
    void OnRegisteredMapObject_ServerInternal(UPalMapObjectModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantedEffectToMapObject_ServerInternal(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect);
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeMapObject_ServerInternal(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
};

