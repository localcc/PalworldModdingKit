#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWeaponType.h"
#include "PalContainerId.h"
#include "PalNPCWeaponGenerator.generated.h"

class APalWeaponBase;

UCLASS(Blueprintable)
class PAL_API UPalNPCWeaponGenerator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, FName> WeaponIDMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId WeaponContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalWeaponBase* WeaponActorBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDefaultEquipWeapon;
    
public:
    UPalNPCWeaponGenerator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnEvent(APalWeaponBase* WeaponActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateWeapn(EPalWeaponType WeaponType, bool IsDefaultEquip);
    
};

