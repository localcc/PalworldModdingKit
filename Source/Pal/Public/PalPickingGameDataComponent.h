#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "EPalPickingGameDifficultyType.h"
#include "Templates/SubclassOf.h"
#include "PalPickingGameDataComponent.generated.h"

class UPalPickingGameProcessor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalPickingGameDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPickingGameProcessor> PickingGameProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectTreasureGradeType, EPalPickingGameDifficultyType> TreasureBoxGradeDifficultyMap;
    
public:
    UPalPickingGameDataComponent(const FObjectInitializer& ObjectInitializer);

};

