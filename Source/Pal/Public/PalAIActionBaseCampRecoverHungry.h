#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampRecoverHungry.generated.h"

class UPalUserWidgetWorldHUD;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungry : public UPalAIActionBaseCampBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid WantFoodHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetWorldHUD> WantFoodHUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WantFoodHUDOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalMonsterControllerBaseCampHungryParameter HungeryParameter;
    
public:
    UPalAIActionBaseCampRecoverHungry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActionEat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActionApproach();
    

    // Fix for true pure virtual functions not being implemented
};

