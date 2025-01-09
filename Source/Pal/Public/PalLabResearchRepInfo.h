#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalLabResearchRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalLabResearchRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ResearchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmount;
    
    PAL_API FPalLabResearchRepInfo();
};

