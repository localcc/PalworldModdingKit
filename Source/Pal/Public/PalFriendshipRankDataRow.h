#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalFriendshipRankDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFriendshipRankDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FriendshipRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPoint;
    
    PAL_API FPalFriendshipRankDataRow();
};

