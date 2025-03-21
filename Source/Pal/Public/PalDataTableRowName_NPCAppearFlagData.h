#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCAppearFlagData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_NPCAppearFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_NPCAppearFlagData();
};

