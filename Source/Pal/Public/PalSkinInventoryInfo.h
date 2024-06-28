#pragma once
#include "CoreMinimal.h"
#include "PalSkinInGameItemData.h"
#include "PalSkinPlatformItemData.h"
#include "PalSkinInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalSkinInGameItemData> InGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalSkinPlatformItemData> PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
    PAL_API FPalSkinInventoryInfo();
};

