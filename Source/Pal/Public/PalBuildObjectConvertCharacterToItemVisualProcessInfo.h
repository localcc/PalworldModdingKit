#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObjectConvertCharacterToItemVisualProcessInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectConvertCharacterToItemVisualProcessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConvertProgressRate;
    
    PAL_API FPalBuildObjectConvertCharacterToItemVisualProcessInfo();
};

