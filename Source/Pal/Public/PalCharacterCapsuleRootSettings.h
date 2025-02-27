#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacterCapsuleRootSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCapsuleRootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxCapsuleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MeshOffset;
    
    PAL_API FPalCharacterCapsuleRootSettings();
};

