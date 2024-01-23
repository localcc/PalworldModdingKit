#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_PassiveSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_PassiveSkillData();
};
FORCEINLINE uint32 GetTypeHash(const FPalDataTableRowName_PassiveSkillData) { return 0; }

