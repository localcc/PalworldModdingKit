#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObject.h"
#include "PalMapObjectDropItem.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectDropItem : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMovementActive;
    
public:
    APalMapObjectDropItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopMovement_Multicast(const FVector& Location, const FRotator& Rotation);
    
};

