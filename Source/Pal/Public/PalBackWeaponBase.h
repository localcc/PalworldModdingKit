#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagContainer.h"
#include "PalBackWeaponBase.generated.h"

class UMaterialInterface;
class USceneComponent;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalBackWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetMainMesh();
    
};

