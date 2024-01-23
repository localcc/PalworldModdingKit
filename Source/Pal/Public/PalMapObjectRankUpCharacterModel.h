#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRankUpCharacterResultDelegateDelegate.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRankUpCharacterModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectRankUpCharacterModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRankUpCharacterResultDelegate OnReceiveRequestResultDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
public:
    UPalMapObjectRankUpCharacterModel();
private:
    UFUNCTION(BlueprintCallable)
    void RequestRankup_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOperationResult(const int32 ResultInt);
    
};

