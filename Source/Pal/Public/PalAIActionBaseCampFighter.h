#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionBaseCampFighter.generated.h"

class UPalMapObjectDefenseModelBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampFighter : public UPalAIActionBaseCampBase {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampFighter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetDefenseMapObjectModel(UPalMapObjectDefenseModelBase*& OutModel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAssignDefenseModelId(const FGuid& InDefenseMapObjectModelId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActionWait();
    
};

