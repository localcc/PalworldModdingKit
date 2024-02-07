#pragma once
#include "CoreMinimal.h"
#include "PalHitCollision.h"
#include "PalHitCollisionBox.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class PAL_API APalHitCollisionBox : public APalHitCollision {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    APalHitCollisionBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DrawHitCollision();
    
};

