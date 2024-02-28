#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseModelBase.h"
#include "PalMapObjectDefenseWaitModel.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class UPalMapObjectDefenseWaitModel : public UPalMapObjectDefenseModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalMapObject> WeakLauncherControlMapObject;
    
public:
    UPalMapObjectDefenseWaitModel();
};

