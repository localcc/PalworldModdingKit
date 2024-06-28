#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleTransportItemStatus.h"
#include "PalBaseCampModuleTransportItemTarget.h"
#include "PalInstanceID.h"
#include "PalBaseCampModuleTransportItemDirector.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalBaseCampModuleTransportItemDirector : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampModuleTransportItemStatus> TransportItemStatusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampModuleTransportItemTarget> TransportTargetMap;
    
public:
    UPalBaseCampModuleTransportItemDirector();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateMapObjectContainer(UPalMapObjectItemContainerModule* ContainerModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUnassignWorkTransportItemTarget(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnUnassignWorkRequirement(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWorkTransportItemTarget(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWorkRequirement(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
};

