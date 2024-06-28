#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalWazaID.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalNPCOtomoWazaDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCOtomoWazaDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza3;
    
    PAL_API FPalNPCOtomoWazaDataRow();
};

