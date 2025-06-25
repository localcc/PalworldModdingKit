#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalArenaNPCData.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaNPCData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankPoint;
    
    PAL_API FPalArenaNPCData();
};

