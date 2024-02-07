#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDamageInfo.h"
#include "PalFoliageISMComponent.h"
#include "PalFoliageISMComponentBase.generated.h"

class UPalFoliageInstance;
class UPalMapObjectFoliageModel;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFoliageISMComponentBase : public UPalFoliageISMComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FVector, int32> InstanceIndexMapByLocation;
    
public:
    UPalFoliageISMComponentBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SpawnInstance(UPalFoliageInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamageInClient(const FPalDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeModel(UPalMapObjectFoliageModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void DespawnInstance(UPalFoliageInstance* Instance);
    
};

