#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleEnergy.generated.h"

class UPalBaseCampModuleEnergy_FunctionBase;

UCLASS(Blueprintable)
class UPalBaseCampModuleEnergy : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampModuleEnergy_FunctionBase*> FunctionArray;
    
public:
    UPalBaseCampModuleEnergy();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

