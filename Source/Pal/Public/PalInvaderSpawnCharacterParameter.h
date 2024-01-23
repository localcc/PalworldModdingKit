#pragma once
#include "CoreMinimal.h"
#include "PalInvaderSpawnCharacterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderSpawnCharacterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    PAL_API FPalInvaderSpawnCharacterParameter();
};

