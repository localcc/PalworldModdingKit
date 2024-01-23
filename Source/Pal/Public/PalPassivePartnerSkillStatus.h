#pragma once
#include "CoreMinimal.h"
#include "EPalPassivePartnerSkillState.h"
#include "PalPassivePartnerSkillStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassivePartnerSkillState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    PAL_API FPalPassivePartnerSkillStatus();
};

