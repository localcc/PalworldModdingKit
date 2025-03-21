#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectGlobalPalStorageModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectGlobalPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> GlobalPalStorageWidget;
    
    UPalMapObjectGlobalPalStorageModel();

};

