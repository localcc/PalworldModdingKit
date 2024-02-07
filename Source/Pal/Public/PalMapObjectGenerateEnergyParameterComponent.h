#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalEnergyType.h"
#include "PalMapObjectGenerateEnergyParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectGenerateEnergyParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalEnergyType GenerateEnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateEnergyRateByWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEnergyStorage;
    
    UPalMapObjectGenerateEnergyParameterComponent(const FObjectInitializer& ObjectInitializer);

};

