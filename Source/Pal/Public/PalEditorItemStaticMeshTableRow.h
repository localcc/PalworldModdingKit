#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEditorItemStaticMeshTableRow.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FPalEditorItemStaticMeshTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMeshPath;
    
    PAL_API FPalEditorItemStaticMeshTableRow();
};

