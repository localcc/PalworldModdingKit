#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDebugAutoBaseCampBuilderWorker.h"
#include "PalInstanceID.h"
#include "PalDebugAutoBaseCampBuilder.generated.h"

UCLASS(Blueprintable)
class APalDebugAutoBaseCampBuilder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDebugAutoBaseCampBuilderWorker> Workers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomPassiveSkill;
    
public:
    APalDebugAutoBaseCampBuilder(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividual_ServerInternal(FPalInstanceID ID);
    
};

