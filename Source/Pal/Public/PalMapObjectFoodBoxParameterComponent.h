#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectFoodBoxParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFoodBoxParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionMultiplier;
    
    UPalMapObjectFoodBoxParameterComponent(const FObjectInitializer& ObjectInitializer);

};

