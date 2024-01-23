#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterNote.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterNote : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoteRowName;
    
    UPalMapObjectModelInitializeExtraParameterNote();
};

