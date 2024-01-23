#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerReaction.generated.h"

class APalCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerReaction : public UPalAIActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* LookTargetCharacter;
    
public:
    UPalAIActionWorkerReaction();
};

