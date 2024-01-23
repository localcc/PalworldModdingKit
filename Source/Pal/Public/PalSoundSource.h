#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalSoundSource.generated.h"

USTRUCT(BlueprintType)
struct FPalSoundSource : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Radius_Meter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMuteable;
    
    PAL_API FPalSoundSource();
};

