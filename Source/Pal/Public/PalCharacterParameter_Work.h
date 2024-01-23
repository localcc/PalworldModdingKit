#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlagContainer.h"
#include "PalCharacterParameter_Work.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterParameter_Work {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectInstanceIdApproachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bApproachToAssignedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepairRequiredWorkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer NotWorkableFlag;
    
public:
    PAL_API FPalCharacterParameter_Work();
};

