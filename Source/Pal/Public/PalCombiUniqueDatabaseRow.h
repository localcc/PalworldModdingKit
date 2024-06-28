#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalGenderType.h"
#include "EPalTribeID.h"
#include "PalCombiUniqueDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCombiUniqueDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID ParentTribeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGenderType ParentGenderA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID ParentTribeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGenderType ParentGenderB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildCharacterID;
    
    PAL_API FPalCombiUniqueDatabaseRow();
};

