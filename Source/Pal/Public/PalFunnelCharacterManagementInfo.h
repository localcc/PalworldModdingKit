#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalFunnelCharacterManagementInfo.generated.h"

class APalFunnelCharacter;

USTRUCT(BlueprintType)
struct FPalFunnelCharacterManagementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID OwnerCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalFunnelCharacter* FunnelCharacter;
    
    PAL_API FPalFunnelCharacterManagementInfo();
};

