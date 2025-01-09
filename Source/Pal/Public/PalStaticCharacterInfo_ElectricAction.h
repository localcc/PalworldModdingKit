#pragma once
#include "CoreMinimal.h"
#include "PalStaticCharacterInfo_ElectricAction.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_ElectricAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartLoopOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActionLoopOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopContinueSeconds;
    
    PAL_API FPalStaticCharacterInfo_ElectricAction();
};

