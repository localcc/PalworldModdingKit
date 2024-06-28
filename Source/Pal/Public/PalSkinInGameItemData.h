#pragma once
#include "CoreMinimal.h"
#include "PalSkinInGameItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinInGameItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalSkinInGameItemData();
};

