#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalRegionAreaTriggerBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRegionAreaTriggerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindRegionNameMsgID;
    
    APalRegionAreaTriggerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OtherActor);
    
};

