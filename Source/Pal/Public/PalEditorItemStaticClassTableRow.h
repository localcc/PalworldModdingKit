#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PalEditorItemStaticClassTableRow.generated.h"

class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalEditorItemStaticClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalStaticItemDataBase> StaticClass;
    
    PAL_API FPalEditorItemStaticClassTableRow();
};

