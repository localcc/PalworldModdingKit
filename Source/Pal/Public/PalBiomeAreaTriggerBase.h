#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalBiomeType.h"
#include "PalBiomeAreaTriggerBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBiomeAreaTriggerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BindBiomeType;
    
    APalBiomeAreaTriggerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor, EPalBiomeType BiomeType);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OtherActor, EPalBiomeType BiomeType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBiomeType GetBiomeType() const;
    
};

