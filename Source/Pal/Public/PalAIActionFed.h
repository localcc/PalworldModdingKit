#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionFed.generated.h"

class APalCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionFed : public UPalAIActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* ApproachTarget;
    
public:
    UPalAIActionFed();
};

