#pragma once
#include "CoreMinimal.h"
#include "PalHitCollision.h"
#include "PalHitCollisionSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class PAL_API APalHitCollisionSphere : public APalHitCollision {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    APalHitCollisionSphere(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DrawHitCollision();
    
};

