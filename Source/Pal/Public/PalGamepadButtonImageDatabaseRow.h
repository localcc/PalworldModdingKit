#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "PalGamepadButtonImageDatabaseRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalGamepadButtonImageDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> XboxButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    PAL_API FPalGamepadButtonImageDatabaseRow();
};

