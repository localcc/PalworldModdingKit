#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBaseCampModuleTransportItemTargetReservedInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemTargetReservedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndNum> ItemInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RequiredConcreteModelId;
    
    PAL_API FPalBaseCampModuleTransportItemTargetReservedInfo();
};

