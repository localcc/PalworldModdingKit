#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalObjectReplicatorComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalObjectReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReplicateObject;
    
public:
    UPalObjectReplicatorComponent(const FObjectInitializer& ObjectInitializer);

};

