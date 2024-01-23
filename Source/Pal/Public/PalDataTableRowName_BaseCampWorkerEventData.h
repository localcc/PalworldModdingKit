#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_BaseCampWorkerEventData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_BaseCampWorkerEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_BaseCampWorkerEventData();
};

