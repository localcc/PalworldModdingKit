#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "EPalBodyPartsType.h"
#include "PalBodyPartsSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBodyPartsSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBodyPartsType BodyPartsType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BroadcastCollisionProfileName, meta=(AllowPrivateAccess=true))
    FName BroadcastCollisionProfileName;
    
public:
    UPalBodyPartsSphereComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BroadcastCollisionProfileName();
    
};

