#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerTreasureMapPointRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerTreasureMapPointRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TreasureMapPointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Rarity;
    
    PAL_API FPalPlayerTreasureMapPointRepInfo();
};

