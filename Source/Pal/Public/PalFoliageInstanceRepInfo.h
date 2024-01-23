#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageInstanceRepInfo.generated.h"

class UPalFoliageInstance;

USTRUCT(BlueprintType)
struct FPalFoliageInstanceRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FoliageTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageInstanceId InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFoliageInstance* Instance;
    
    PAL_API FPalFoliageInstanceRepInfo();
};

