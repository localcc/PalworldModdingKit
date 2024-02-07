#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectWorkerAvailableFacilityType.h"
#include "PalBaseCampFacilityCountPair.h"
#include "PalBaseCampFacilityUsageInfoSet.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleFacilityReservation.generated.h"

class UPalIndividualCharacterHandle;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleFacilityReservation : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectWorkerAvailableFacilityType, FPalBaseCampFacilityUsageInfoSet> FacilityUsageInfoSetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampFacilityCountPair> FacilityCounts;
    
public:
    UPalBaseCampModuleFacilityReservation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnStartUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishUseFacility_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

