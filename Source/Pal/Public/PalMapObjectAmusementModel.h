#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectWorkerAvailableFacilityInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectAmusementModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalAIActionBase;
class UPalIndividualCharacterHandle;
class UPalMapObjectAmusementModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectAmusementModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectWorkerAvailableFacilityInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectAmusementModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnUpdateCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* HealingCharacterHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HealingLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AffectSanityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> AIActionClass;
    
public:
    UPalMapObjectAmusementModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishHealingAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetHealingHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCharacterHandle();
    

    // Fix for true pure virtual functions not being implemented
};

