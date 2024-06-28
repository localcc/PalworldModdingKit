#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampWorkCollectionRepInfo.generated.h"

class UPalWorkBase;

USTRUCT(BlueprintType)
struct FPalBaseCampWorkCollectionRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorkBase* Work;
    
    PAL_API FPalBaseCampWorkCollectionRepInfo();
};

