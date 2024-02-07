#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectRepairItemParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectRepairItemParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredRepairItemPercent;
    
    UPalMapObjectRepairItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

