#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalSpawnerRuleObjectBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalSpawnerRuleObjectBase : public UObject {
    GENERATED_BODY()
public:
    UPalSpawnerRuleObjectBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    bool Validate(const UObject* WorldContextObject, const FGuid& PlayerUId) const;
    
};

