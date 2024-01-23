#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PalEditorItemDynamicClassTableRow.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalEditorItemDynamicClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDynamicItemDataBase> DynamicClass;
    
    PAL_API FPalEditorItemDynamicClassTableRow();
};

