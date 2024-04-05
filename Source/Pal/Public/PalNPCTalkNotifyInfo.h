#pragma once
#include "CoreMinimal.h"
#include "PalNPCTalkNotifyInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalkDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkDataSeqenceName;
    
    PAL_API FPalNPCTalkNotifyInfo();
};

