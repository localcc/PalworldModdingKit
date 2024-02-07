#pragma once
#include "CoreMinimal.h"
#include "PalFoliageIdentifiableInfo.h"
#include "PalWorkBase.h"
#include "PalWorkDeforestFoliage.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkDeforestFoliage : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageIdentifiableInfo IdentifiableInfo;
    
public:
    UPalWorkDeforestFoliage();

};

