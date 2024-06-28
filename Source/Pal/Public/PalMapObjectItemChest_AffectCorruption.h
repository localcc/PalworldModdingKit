#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemChestModel.h"
#include "PalMapObjectItemChest_AffectCorruption.generated.h"

class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectItemChest_AffectCorruption : public UPalMapObjectItemChestModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
public:
    UPalMapObjectItemChest_AffectCorruption();

};

