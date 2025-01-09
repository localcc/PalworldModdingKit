#pragma once
#include "CoreMinimal.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneParameter.h"
#include "PalPassiveSkillSetupInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillSetupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassiveRegeneParameter RegeneParam;
    
    PAL_API FPalPassiveSkillSetupInfo();
};

