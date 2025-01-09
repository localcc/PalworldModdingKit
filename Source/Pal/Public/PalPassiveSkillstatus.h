#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillState.h"
#include "EPalPassiveTriggerType.h"
#include "PalPassiveSkillstatus.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillstatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveTriggerType TriggerType;
    
    PAL_API FPalPassiveSkillstatus();
};

