#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampRepInfo.generated.h"

class UPalBaseCampModel;

USTRUCT(BlueprintType)
struct FPalBaseCampRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampModel* BaseCamp;
    
    PAL_API FPalBaseCampRepInfo();
};

