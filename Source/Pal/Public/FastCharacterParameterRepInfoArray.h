#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "CharacterParameterRepInfo.h"
#include "FastCharacterParameterRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastCharacterParameterRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterParameterRepInfo> Items;
    
    PAL_API FFastCharacterParameterRepInfoArray();
};

