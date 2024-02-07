#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalEditorMapObjectCheckPlacer.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class PAL_API APalEditorMapObjectCheckPlacer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LeftEdgeArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RightEdgeArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* StackRowArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlacementMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_MapObjectData> IgnoreRowNames;
    
public:
    APalEditorMapObjectCheckPlacer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlaceMapObjects();
    
};

