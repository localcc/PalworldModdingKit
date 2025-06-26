#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkCollectResource.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkCollectResource : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWorkingForNonActor;
    
public:
    UPalWorkCollectResource();

};

