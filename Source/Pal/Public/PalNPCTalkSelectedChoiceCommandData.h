#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkSelectedChoiceCommand.h"
#include "PalNPCTalkSelectedChoiceCommandData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkSelectedChoiceCommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalNPCTalkSelectedChoiceCommand selectedChoiceCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeqenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomFuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCloseWhenCalledCustomFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CustomFuncParam;
    
    PAL_API FPalNPCTalkSelectedChoiceCommandData();
};

