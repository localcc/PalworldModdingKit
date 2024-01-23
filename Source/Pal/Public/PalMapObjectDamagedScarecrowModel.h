#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDamagedScarecrowModel.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalMapObjectDamagedScarecrowModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressTimeStartAtDamaged;
    
public:
    UPalMapObjectDamagedScarecrowModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
};

