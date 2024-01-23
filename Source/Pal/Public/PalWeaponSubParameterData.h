#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalWeaponSubParameterData.generated.h"

USTRUCT(BlueprintType)
struct FPalWeaponSubParameterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float stability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float accuracy;
    
    PAL_API FPalWeaponSubParameterData();
};

