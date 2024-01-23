#pragma once
#include "CoreMinimal.h"
#include "PalIncidentExecutionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalIncidentExecutionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExecuteMultiple;
    
    PAL_API FPalIncidentExecutionSettings();
};

