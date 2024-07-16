#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataPalCharacterClass.generated.h"

class APalCharacter;

UCLASS(DefaultToInstanced, Blueprintable, EditInlineNew)
class UPalSkinDataPalCharacterClass : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> NormalCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> BossCharacterClass;
    
    UPalSkinDataPalCharacterClass();

};

