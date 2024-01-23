#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_Common.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTutorialTrigger_Common : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTutorialTriggerConditionType TriggerType;
    
    UPalTutorialTrigger_Common();
};

