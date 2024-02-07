#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PalLimitVolumeInterface.h"
#include "PalLimitVolumeBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLimitVolumeBoxComponent : public UBoxComponent, public IPalLimitVolumeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitFlags;
    
public:
    UPalLimitVolumeBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

