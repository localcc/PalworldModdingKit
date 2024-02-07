#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeOrderCommandInterface.h"
#include "PalAIActionCompositeWorker.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCompositeWorkerBaseCamp.generated.h"

class UPalAIActionBaseCampDefenseBase;
class UPalAIActionCombatBase;

UCLASS(Blueprintable)
class UPalAIActionCompositeWorkerBaseCamp : public UPalAIActionCompositeWorker, public IPalAIActionCompositeOrderCommandInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionCombatBase> CombatActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseActionClass;
    
public:
    UPalAIActionCompositeWorkerBaseCamp();


    // Fix for true pure virtual functions not being implemented
};

