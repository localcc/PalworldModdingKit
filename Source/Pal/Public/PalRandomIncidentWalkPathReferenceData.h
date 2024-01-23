#pragma once
#include "CoreMinimal.h"
#include "PalRandomIncidentWalkPathReferenceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalRandomIncidentWalkPathReferenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WalkPoints;
    
    PAL_API FPalRandomIncidentWalkPathReferenceData();
};

