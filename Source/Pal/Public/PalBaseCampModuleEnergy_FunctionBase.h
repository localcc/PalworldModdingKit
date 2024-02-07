#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalBaseCampModuleEnergyState.h"
#include "PalBaseCampModuleEnergy_FunctionBase.generated.h"

class UPalBaseCampModuleEnergy_FunctionBase;
class UPalMapObjectGenerateEnergyModel;

UCLASS(Blueprintable)
class UPalBaseCampModuleEnergy_FunctionBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalBaseCampModuleEnergy_FunctionBase*, Function);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEnergyAmountDelegate OnUpdateEnergyAmountDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> EnergyGeneratorConcreteModelIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> EnergyConsumerConcreteModelIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampModuleEnergyState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProvideWaitRemainTime;
    
public:
    UPalBaseCampModuleEnergy_FunctionBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void InvokeOnUpdateEnergyAmount(UPalMapObjectGenerateEnergyModel* Model);
    
};

