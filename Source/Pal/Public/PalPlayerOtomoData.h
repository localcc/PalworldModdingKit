#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalOtomoPalOrderType.h"
#include "PalContainerId.h"
#include "PalPlayerOtomoData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerOtomoData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId OtomoCharacterContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOtomoPalOrderType OtomoOrder;
    
public:
    UPalPlayerOtomoData();
};

