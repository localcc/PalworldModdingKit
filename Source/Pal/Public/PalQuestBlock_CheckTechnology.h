#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_RecipeTechnologyData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckTechnology.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CheckTechnology : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_RecipeTechnologyData RequireTechnologyName;
    
public:
    UPalQuestBlock_CheckTechnology();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnlockedAnyTechnology();
    
};

