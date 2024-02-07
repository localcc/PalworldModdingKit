#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagContainer.h"
#include "PalBackWeaponBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBackWeaponBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool InFirstOrSecondSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEquipHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer HiddenBackWeapon;
    
public:
    APalBackWeaponBase(const FObjectInitializer& ObjectInitializer);
};

