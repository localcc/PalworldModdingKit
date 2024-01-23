#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNoteMasterDataTextureTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PAL_API FPalNoteMasterDataTextureTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    FPalNoteMasterDataTextureTableRow();
};

