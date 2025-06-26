#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUILiftSlotModelBehaviourBase.h"
#include "PalUILiftSlotModelBehaviourPalStorageMenu.generated.h"

UCLASS(Blueprintable)
class UPalUILiftSlotModelBehaviourPalStorageMenu : public UPalUILiftSlotModelBehaviourBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PushedOwnerMapObjectInstanceId;
    
public:
    UPalUILiftSlotModelBehaviourPalStorageMenu();

};

