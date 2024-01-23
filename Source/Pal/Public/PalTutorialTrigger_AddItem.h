#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeB.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_AddItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTutorialTrigger_AddItem : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StaticItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemTypeB ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
    UPalTutorialTrigger_AddItem();
};

