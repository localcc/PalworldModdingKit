#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionBaseCampResurrect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampResurrect : public UPalAIActionBaseCampBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCancelSleepAction;
    
public:
    UPalAIActionBaseCampResurrect();

};

