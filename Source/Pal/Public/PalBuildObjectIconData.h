#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalBuildObjectIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalBuildObjectIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftIcon;
    
    PAL_API FPalBuildObjectIconData();
};

