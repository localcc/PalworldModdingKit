#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEditorItemActorClassTableRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalEditorItemActorClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> actorClass;
    
    PAL_API FPalEditorItemActorClassTableRow();
};

