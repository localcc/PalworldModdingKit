#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FishShadowData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_FishShadowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_FishShadowData();
};

