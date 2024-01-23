#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkCommand.h"
#include "PalNPCTalkSelectedChoiceCommandData.h"
#include "PalNPCTalkData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalNPCTalkCommand TalkCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MessageIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChoiceMessageIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkerNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomFuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCloseWhenCalledCustomFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CustomFuncParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalNPCTalkSelectedChoiceCommandData> SelectedChoiceCommandDataList;
    
    PAL_API FPalNPCTalkData();
};

