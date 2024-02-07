#pragma once
#include "CoreMinimal.h"
#include "PalFunnelSkillModule.h"
#include "PalFunnelSkillModuleReticleTargetAttack.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFunnelSkillModuleReticleTargetAttack : public UPalFunnelSkillModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSetSkillAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCharacter> ReticleTarget;
    
public:
    UPalFunnelSkillModuleReticleTargetAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetTarget() const;
    
};

