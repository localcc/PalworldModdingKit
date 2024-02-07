#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMealLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalMealLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MealItemID;
    
    PAL_API FPalMealLogDisplayData();
};

