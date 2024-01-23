#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCoopSkillSearchEffectParameter.h"
#include "Templates/SubclassOf.h"
#include "PalCoopSkillSearchSystem.generated.h"

class UPalCoopSkillSearchBase;
class UPalCoopSkillSearchEffectController;
class UPalCoopSkillSearchLocationRegister;

UCLASS(Blueprintable)
class UPalCoopSkillSearchSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCoopSkillSearchEffectController> EffectControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCoopSkillSearchLocationRegister* LocationRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCoopSkillSearchEffectController* EffectController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalCoopSkillSearchBase*> SearchObjects;
    
public:
    UPalCoopSkillSearchSystem();
    UFUNCTION(BlueprintCallable)
    void StartSearchEffect(const FPalCoopSkillSearchEffectParameter& EffectParam);
    
    UFUNCTION(BlueprintCallable)
    UPalCoopSkillSearchBase* CreateSearchObject(TSubclassOf<UPalCoopSkillSearchBase> SearchClass);
    
};

