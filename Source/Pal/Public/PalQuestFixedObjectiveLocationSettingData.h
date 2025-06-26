#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PalQuestFixedObjectiveLocationSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestFixedObjectiveLocationSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    PAL_API FPalQuestFixedObjectiveLocationSettingData();
};

