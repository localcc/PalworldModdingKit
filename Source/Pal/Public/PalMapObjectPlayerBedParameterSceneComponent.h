#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectPlayerBedParameterSceneComponent.generated.h"

class UPalActionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPlayerBedParameterSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> SleepPlayerBedActionClass;
    
    UPalMapObjectPlayerBedParameterSceneComponent(const FObjectInitializer& ObjectInitializer);

};

