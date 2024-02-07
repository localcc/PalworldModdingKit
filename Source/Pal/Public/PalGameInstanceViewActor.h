#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalGameInstanceViewActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class APalGameInstanceViewActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Target;
    
    APalGameInstanceViewActor(const FObjectInitializer& ObjectInitializer);

};

