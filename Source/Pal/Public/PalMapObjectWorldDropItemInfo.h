#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalMapObjectWorldDropItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectWorldDropItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime CreatedAt;
    
    PAL_API FPalMapObjectWorldDropItemInfo();
};

