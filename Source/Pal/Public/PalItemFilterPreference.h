#pragma once
#include "CoreMinimal.h"
#include "PalItemFilterPreferenceItem.h"
#include "PalItemFilterPreference.generated.h"

USTRUCT(BlueprintType)
struct FPalItemFilterPreference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalItemFilterPreferenceItem> PreferenceMap;
    
    PAL_API FPalItemFilterPreference();
};

