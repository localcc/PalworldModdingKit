#pragma once
#include "CoreMinimal.h"
#include "PalResidentSkillNotifyParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalResidentSkillNotifyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    PAL_API FPalResidentSkillNotifyParameter();
};

