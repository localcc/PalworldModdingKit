#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalTalkTreeDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTalkTreeDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName textID;
    
    PAL_API FPalTalkTreeDataTableRow();
};

