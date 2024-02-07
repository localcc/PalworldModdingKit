#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalDynamicPalEggItemDataBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDynamicPalEggItemDataBase : public UPalDynamicItemDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
public:
    UPalDynamicPalEggItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

