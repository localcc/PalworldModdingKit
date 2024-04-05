#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalItemFilterPreferenceItem.generated.h"

USTRUCT(BlueprintType)
struct FPalItemFilterPreferenceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FilterTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> TypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> TypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> TypeB_Except;
    
    PAL_API FPalItemFilterPreferenceItem();
};

