#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalResidentSkillModuleBase.h"
#include "PalResidentSkillPoseidonOrca_SpearBase.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalResidentSkillPoseidonOrca_SpearBase : public UPalResidentSkillModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsOpendBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentBulletNum;
    
public:
    UPalResidentSkillPoseidonOrca_SpearBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimTargetLocation(APalCharacter* TargetCharacter);
    
};

