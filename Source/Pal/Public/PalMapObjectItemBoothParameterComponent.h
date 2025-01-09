#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectItemBoothParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectItemBoothParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoreSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionMultiplier;
    
    UPalMapObjectItemBoothParameterComponent(const FObjectInitializer& ObjectInitializer);

};

