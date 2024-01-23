#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_NPCUniqueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_NPCUniqueData();
};

