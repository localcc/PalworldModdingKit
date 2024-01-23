#pragma once
#include "CoreMinimal.h"
#include "PalCharacterList.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalCharacterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> CharacterList;
    
    PAL_API FPalCharacterList();
};

