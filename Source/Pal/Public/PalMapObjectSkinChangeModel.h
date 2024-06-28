#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectSkinChangeModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectSkinChangeModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> SkinChangerWidget;
    
    UPalMapObjectSkinChangeModel();

};

