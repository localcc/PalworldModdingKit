#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIInputGuard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIInputGuard : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIInputGuard();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerReleaseGuardInput();
    
};

