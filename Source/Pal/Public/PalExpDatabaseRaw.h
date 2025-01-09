#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalExpDatabaseRaw.generated.h"

USTRUCT(BlueprintType)
struct FPalExpDatabaseRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DropEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NextEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PalNextEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PalTotalEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BuildEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CraftEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PalBuildEXP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PalCraftEXP;
    
    PAL_API FPalExpDatabaseRaw();
};

