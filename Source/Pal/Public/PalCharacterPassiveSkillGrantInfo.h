#pragma once
#include "CoreMinimal.h"
#include "PalCharacterPassiveSkillGrantInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterPassiveSkillGrantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreIdList;
    
    PAL_API FPalCharacterPassiveSkillGrantInfo();
};

