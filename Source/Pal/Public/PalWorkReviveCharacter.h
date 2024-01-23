#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalWorkBase.h"
#include "PalWorkReviveCharacter.generated.h"

UCLASS(Blueprintable)
class UPalWorkReviveCharacter : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID TargetIndividualId;
    
public:
    UPalWorkReviveCharacter();
};

