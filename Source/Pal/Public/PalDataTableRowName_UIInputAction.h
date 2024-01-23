#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_UIInputAction.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_UIInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_UIInputAction();
};

