#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "PalLimitVolumeInterface.h"
#include "PalLimitVolumeSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLimitVolumeSphereComponent : public USphereComponent, public IPalLimitVolumeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitFlags;
    
public:
    UPalLimitVolumeSphereComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

