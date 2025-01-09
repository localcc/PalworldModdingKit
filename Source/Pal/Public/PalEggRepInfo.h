#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalEggRepInfo.generated.h"

class UPalDynamicPalEggItemDataBase;
class UPalWorkProgress;

USTRUCT(BlueprintType)
struct FPalEggRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorkProgress* WorkProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDynamicPalEggItemDataBase* PalEggData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
    PAL_API FPalEggRepInfo();
};

