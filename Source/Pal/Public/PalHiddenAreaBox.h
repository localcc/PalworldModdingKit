#pragma once
#include "CoreMinimal.h"
#include "PalHiddenAreaBase.h"
#include "PalHiddenAreaBox.generated.h"

class UPalHiddenBoxComponent;

UCLASS(Blueprintable)
class PAL_API APalHiddenAreaBox : public APalHiddenAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHiddenBoxComponent* HiddenBoxComponent;
    
    APalHiddenAreaBox(const FObjectInitializer& ObjectInitializer);

};

