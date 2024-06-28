#pragma once
#include "CoreMinimal.h"
#include "PalSkinPlatformItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinPlatformItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    PAL_API FPalSkinPlatformItemData();
};

