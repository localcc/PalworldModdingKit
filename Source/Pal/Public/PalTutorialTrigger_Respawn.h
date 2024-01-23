#pragma once
#include "CoreMinimal.h"
#include "EPalLocationType.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_Respawn.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTutorialTrigger_Respawn : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalLocationType> LocationTypes;
    
    UPalTutorialTrigger_Respawn();
};

