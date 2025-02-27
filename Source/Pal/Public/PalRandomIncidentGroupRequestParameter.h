#pragma once
#include "CoreMinimal.h"
#include "PalRandomIncidentGroupRequestParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentGroupRequestParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    PAL_API FPalRandomIncidentGroupRequestParameter();
};

