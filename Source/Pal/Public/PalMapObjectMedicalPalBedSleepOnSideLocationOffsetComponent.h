#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EPalSizeType.h"
#include "PalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSizeType, FVector> AdditionalLocationOffsetMapBySizeType;
    
    UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent(const FObjectInitializer& ObjectInitializer);

};

