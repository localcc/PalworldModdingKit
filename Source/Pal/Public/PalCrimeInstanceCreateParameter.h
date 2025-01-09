#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalWorldSecurityLawTriggerType.h"
#include "PalCrimeInstanceCreateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalCrimeInstanceCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrimeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorldSecurityLawTriggerType TriggerType;
    
    PAL_API FPalCrimeInstanceCreateParameter();
};

