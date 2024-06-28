#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRandomIncidentPlacementEggDataComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRandomIncidentPlacementEggDataComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalMonsterId;
    
    UPalRandomIncidentPlacementEggDataComponent(const FObjectInitializer& ObjectInitializer);

};

