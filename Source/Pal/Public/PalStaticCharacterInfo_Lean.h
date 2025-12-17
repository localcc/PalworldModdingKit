#pragma once
#include "CoreMinimal.h"
#include "PalStaticCharacterInfo_LeanParameter.h"
#include "PalStaticCharacterInfo_Lean.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_Lean {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticCharacterInfo_LeanParameter X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticCharacterInfo_LeanParameter Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticCharacterInfo_LeanParameter Z;
    
    PAL_API FPalStaticCharacterInfo_Lean();
};

