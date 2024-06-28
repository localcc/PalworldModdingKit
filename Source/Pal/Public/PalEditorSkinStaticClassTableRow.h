#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PalEditorSkinStaticClassTableRow.generated.h"

class UPalSkinDataBase;

USTRUCT(BlueprintType)
struct FPalEditorSkinStaticClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSkinDataBase> StaticClass;
    
    PAL_API FPalEditorSkinStaticClassTableRow();
};

