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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Otomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisitorLeader;
    
    PAL_API FPalInvaderSpawnCharacterParameter();
};

