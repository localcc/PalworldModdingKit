#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalRandomIncidentObjectPlacement.generated.h"

class UPalRandomIncidentPlacementDropItemDataComponent;
class UPalRandomIncidentPlacementEggDataComponent;

UCLASS(Blueprintable)
class PAL_API APalRandomIncidentObjectPlacement : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPalRandomIncidentPlacementEggDataComponent*> Eggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPalRandomIncidentPlacementDropItemDataComponent*> DropItems;
    
public:
    APalRandomIncidentObjectPlacement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalRandomIncidentPlacementEggDataComponent*> GetEggDataComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalRandomIncidentPlacementDropItemDataComponent*> GetDropItemDataComponents() const;
    
};

