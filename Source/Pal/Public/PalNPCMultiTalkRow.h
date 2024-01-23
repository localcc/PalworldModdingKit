#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PalNPCMultiTalkRow.generated.h"

class UPalNPCMultiTalkHandle;

USTRUCT(BlueprintType)
struct FPalNPCMultiTalkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalNPCMultiTalkHandle> MultiTalkHandleClass;
    
    PAL_API FPalNPCMultiTalkRow();
};

