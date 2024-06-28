#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionBaseCampChildBase.generated.h"

class UPalAIActionBaseCampBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampChildBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalAIActionBaseCampBase> BaseCampParentAction;
    
public:
    UPalAIActionBaseCampChildBase();

};

