#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_Capture.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTutorialTrigger_Capture : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTutorialTriggerConditionType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerCount;
    
    UPalTutorialTrigger_Capture();
};

