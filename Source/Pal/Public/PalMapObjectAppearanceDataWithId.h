#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectAppearanceData.h"
#include "PalMapObjectAppearanceDataWithId.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectAppearanceDataWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectAppearanceData AppearanceData;
    
    PAL_API FPalMapObjectAppearanceDataWithId();
};

