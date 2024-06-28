#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalRandomIncidentPlacementDropItemDataComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRandomIncidentPlacementDropItemDataComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum;
    
    UPalRandomIncidentPlacementDropItemDataComponent(const FObjectInitializer& ObjectInitializer);

};

