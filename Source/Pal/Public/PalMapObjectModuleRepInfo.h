#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalMapObjectModuleRepInfo.generated.h"

class UPalMapObjectConcreteModelModuleBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModuleRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectConcreteModelModuleBase* Module;
    
    PAL_API FPalMapObjectModuleRepInfo();
};

