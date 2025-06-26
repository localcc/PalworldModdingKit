#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalWazaBulletEmiiterOverlapSphere.h"
#include "PalWazaBulletEmiiterOverlapBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalWazaBulletEmiiterOverlapBase : public UObject {
    GENERATED_BODY()
public:
    UPalWazaBulletEmiiterOverlapBase();

    UFUNCTION(BlueprintCallable)
    bool IsOverlapBulletMuzzle(AActor* SelfActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBulletEmiiterOverlapSphere(TArray<FPalWazaBulletEmiiterOverlapSphere>& Spheres);
    
};

