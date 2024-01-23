#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRecoverOtomoModel.generated.h"

class UPalIndividualCharacterContainer;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectRecoverOtomoModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoverAmountBySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
public:
    UPalMapObjectRecoverOtomoModel();
private:
    UFUNCTION(BlueprintCallable)
    void StoreAllOtomo_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestRecoverAllOtomo_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterContainer(UPalIndividualCharacterContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void ObtainAll_ServerInternal(const int32 RequestPlayerId);
    
};

