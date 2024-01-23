#pragma once
#include "CoreMinimal.h"
#include "PalNPCTalkSystemCustomFunctionParameters.generated.h"

class IPalNPCTalkSystemCustomFunctionInterface;
class UPalNPCTalkSystemCustomFunctionInterface;
class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkSystemCustomFunctionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalNPCTalkSystemCustomFunctionInterface> Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FuncParameter;
    
    PAL_API FPalNPCTalkSystemCustomFunctionParameters();
};

