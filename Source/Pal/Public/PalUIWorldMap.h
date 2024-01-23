#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalWorldMapType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldMap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorldMap : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIWorldMap();
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterRespawnLocation(const FVector& RespawnLocation);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetLocation(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWorldMapData(EPalWorldMapType worldMapType);
    
};

