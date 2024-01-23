#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NoteData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_NoteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_NoteData();
};

