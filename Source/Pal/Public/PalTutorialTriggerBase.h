#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EPalTutorialTriggerType.h"
#include "PalTutorialTriggerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalTutorialTriggerBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Checked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTriggerMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialMsgID;
    
    UPalTutorialTriggerBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalTutorialTriggerType GetType() const;
    
};

