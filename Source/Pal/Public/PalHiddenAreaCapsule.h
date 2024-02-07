#pragma once
#include "CoreMinimal.h"
#include "PalHiddenAreaBase.h"
#include "PalHiddenAreaCapsule.generated.h"

class UPalHiddenCapsuleComponent;

UCLASS(Blueprintable)
class PAL_API APalHiddenAreaCapsule : public APalHiddenAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHiddenCapsuleComponent* HiddenCapsuleComponent;
    
    APalHiddenAreaCapsule(const FObjectInitializer& ObjectInitializer);

};

