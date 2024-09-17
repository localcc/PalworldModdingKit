#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampItemStackInfo.h"
#include "PalBaseCampItemStackRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampItemStackRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectConcreteModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> AvailablePlayerUIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampItemStackInfo> ItemStackInfos;
    
    PAL_API FPalBaseCampItemStackRepInfo();
};

