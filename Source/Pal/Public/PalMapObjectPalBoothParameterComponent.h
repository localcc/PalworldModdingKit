#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectPalBoothParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPalBoothParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionMultiplier;
    
    UPalMapObjectPalBoothParameterComponent(const FObjectInitializer& ObjectInitializer);

};

