#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalEnergyType.h"
#include "PalMapObjectEnergyStorageParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectEnergyStorageParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalEnergyType GenerateEnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEnergyStorage;
    
    UPalMapObjectEnergyStorageParameterComponent(const FObjectInitializer& ObjectInitializer);

};

