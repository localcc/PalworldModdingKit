#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalCharacterUpgradeMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterUpgradeMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetRequiredMoney;
    
    PAL_API FPalCharacterUpgradeMasterData();
};

