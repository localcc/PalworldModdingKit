#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildPlayerInfoRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildPlayerInfoRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalGuildPlayerInfo PlayerInfo;
    
    PAL_API FPalGuildPlayerInfoRepInfo();
};

