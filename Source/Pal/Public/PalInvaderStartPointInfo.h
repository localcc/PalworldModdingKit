#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBiomeType.h"
#include "PalInvaderStartPointInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalInvaderStartPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BiomeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    PAL_API FPalInvaderStartPointInfo();
};

