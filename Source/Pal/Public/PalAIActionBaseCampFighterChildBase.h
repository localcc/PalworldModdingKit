#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampChildBase.h"
#include "PalAIActionBaseCampFighterChildBase.generated.h"

class UPalAIActionBaseCampFighter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampFighterChildBase : public UPalAIActionBaseCampChildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalAIActionBaseCampFighter> WeakParentFighterActionCache;
    
public:
    UPalAIActionBaseCampFighterChildBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionBaseCampFighter* GetParentFighterAction();
    
};

