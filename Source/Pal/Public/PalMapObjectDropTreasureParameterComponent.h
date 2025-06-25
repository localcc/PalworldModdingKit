#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectDropTreasureLotteryParameter.h"
#include "PalMapObjectDropTreasureParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectDropTreasureParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDropTreasureLotteryParameter> DropTreasureLotteryParameters;
    
    UPalMapObjectDropTreasureParameterComponent(const FObjectInitializer& ObjectInitializer);

};

