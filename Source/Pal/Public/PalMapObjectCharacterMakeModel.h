#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectCharacterMakeModel.generated.h"

class UPalHUDDispatchParameterBase;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectCharacterMakeModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> CharacterMakeWidget;
    
    UPalMapObjectCharacterMakeModel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseCheckDialog(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseCharacterMake(UPalHUDDispatchParameterBase* Parameter);
    
};

