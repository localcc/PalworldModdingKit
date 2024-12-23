#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagContainer.h"
#include "PalBackWeaponBase.generated.h"

class UMaterialInterface;
class UPalDynamicWeaponItemDataBase;
class UPalStaticWeaponItemData;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalStaticWeaponItemData* ownWeaponStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDynamicWeaponItemDataBase* ownWeaponDynamicData;
    
public:
    APalBackWeaponBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveModel(bool IsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetMainMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurability() const;
    
};

