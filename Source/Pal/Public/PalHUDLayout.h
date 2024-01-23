#pragma once
#include "CoreMinimal.h"
#include "PalActivatableWidget.h"
#include "PalHUDLayout.generated.h"

class UCommonActivatableWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalHUDLayout : public UPalActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> EscapeMenuClass;
    
public:
    UPalHUDLayout();
};

