#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "PalLevelWeaponSpawnerComponent.generated.h"

class AActor;
class APalAntiAirMissileLauncher;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLevelWeaponSpawnerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAntiAirMissileLauncher> LauncherClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LauncherClass_Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSpawnByBeginPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedWeapon;
    
public:
    UPalLevelWeaponSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SetGuidByOutside(FGuid ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetInstanceId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDestroyedWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugPrintSpawn_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugPrintDespawn_BP();
    
};

