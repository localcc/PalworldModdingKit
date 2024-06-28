#pragma once
#include "CoreMinimal.h"
#include "PalUICharacterSkinDisplayInfo.generated.h"

class UPalSkinDataBase;

USTRUCT(BlueprintType)
struct FPalUICharacterSkinDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalSkinDataBase*> SkinDataArray;
    
    PAL_API FPalUICharacterSkinDisplayInfo();
};

