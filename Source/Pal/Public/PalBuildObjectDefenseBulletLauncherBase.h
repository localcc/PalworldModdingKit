#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObjectDefenseBase.h"
#include "PalBuildObjectDefenseBulletLauncherBase.generated.h"

class AActor;
class APalCharacter;
class APalStationaryWeaponBulletLauncherBase;
class UPalMapObjectBulletLauncherParameterComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectDefenseBulletLauncherBase : public APalBuildObjectDefenseBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectBulletLauncherParameterComponent* BulletLauncherParameterComponent;
    
public:
    APalBuildObjectDefenseBulletLauncherBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnToTarget_BPImpl(const AActor* TargetActor, float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupFooting(const APalCharacter* OwnerCharacter, FVector CharacterLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnerCharacter(const APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTrigger(bool EnableTrigger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APalStationaryWeaponBulletLauncherBase* GetWeaponBulletLauncher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterLocationWithOffset(APalCharacter* OwnerCharacter, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterLocationAndRotationWithOffset(APalCharacter* OwnerCharacter, FVector PreCharaLocation, FVector& OutLocation, FRotator& OutRotation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugDraw_TurnToTarget_BPImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetEnableTrigger(bool EnableTrigger);
    
};

