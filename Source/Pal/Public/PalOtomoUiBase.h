#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalUserWidget.h"
#include "Templates/SubclassOf.h"
#include "PalOtomoUiBase.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalOtomoUiBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalOtomoUiBase();
private:
    UFUNCTION(BlueprintCallable)
    EPalTribeID GetTribeIDFromClass(const TSubclassOf<AActor>& TargetActorClass);
    
};

