#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalNoteData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PAL_API UPalNoteData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPalNoteData();
};

