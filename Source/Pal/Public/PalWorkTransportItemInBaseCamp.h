#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTransportItemType.h"
#include "PalWorkBase.h"
#include "PalWorkTransportItemInBaseCamp.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkTransportItemInBaseCamp : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkTransportItemType TransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ApproachFailedTimeout;
    
public:
    UPalWorkTransportItemInBaseCamp();
};

