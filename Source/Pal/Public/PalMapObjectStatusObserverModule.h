#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectDamageWithLastDelegateDelegate.h"
#include "PalMapObjectStatusObserverModule.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalMapObjectStatusObserverModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectDamageWithLastDelegate OnDamageInServerDelegate;
    
    UPalMapObjectStatusObserverModule();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
};

