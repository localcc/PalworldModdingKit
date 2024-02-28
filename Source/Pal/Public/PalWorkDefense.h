#pragma once
#include "CoreMinimal.h"
#include "EPalWorkDefenseCombatType.h"
#include "PalWorkBase.h"
#include "Templates/SubclassOf.h"
#include "PalWorkDefense.generated.h"

class UPalAIActionBaseCampDefenseBase;
class UPalActionBase;
class UPalMapObjectDefenseBulletLauncherModel;
class UPalMapObjectDefenseModelBase;

UCLASS(Blueprintable)
class UPalWorkDefense : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseAIActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> DefenseWaitActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkDefenseCombatType DefenseCombatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectDefenseModelBase> WeakDefenseModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectDefenseBulletLauncherModel> WeakDefenseBulletLauncherModel;
    
public:
    UPalWorkDefense();
};

