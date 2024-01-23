#pragma once
#include "CoreMinimal.h"
#include "CharacterListForImportanceManager.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FCharacterListForImportanceManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> CharacterList;
    
    PAL_API FCharacterListForImportanceManager();
};

