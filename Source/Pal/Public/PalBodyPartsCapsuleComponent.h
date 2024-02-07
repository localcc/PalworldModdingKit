#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EPalBodyPartsType.h"
#include "PalBodyPartsCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBodyPartsCapsuleComponent : public UCapsuleComponent {
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
    UPalBodyPartsCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BroadcastCollisionProfileName();
    
};

