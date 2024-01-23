#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveAbilitySkillState.h"
#include "EPalPassiveTriggerType.h"
#include "PalPassiveAbilitySkillStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveAbilitySkillStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveAbilitySkillState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveTriggerType TriggerType;
    
    PAL_API FPalPassiveAbilitySkillStatus();
};

