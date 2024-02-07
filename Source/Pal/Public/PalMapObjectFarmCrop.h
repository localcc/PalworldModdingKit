#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalFarmCropGrowupProcessSet.h"
#include "PalMapObjectFarmCrop.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectFarmCrop : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFarmCropGrowupProcessSet> GrowupProcessSets;
    
public:
    APalMapObjectFarmCrop(const FObjectInitializer& ObjectInitializer);

};

