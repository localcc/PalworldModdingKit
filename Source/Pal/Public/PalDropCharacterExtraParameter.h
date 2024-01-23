#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDropCharacterExtraParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDropCharacterExtraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DropPlayerUId;
    
    PAL_API FPalDropCharacterExtraParameter();
};

