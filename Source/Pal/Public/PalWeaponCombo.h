#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalWeaponCombo.generated.h"

class APalCharacter;
class UAnimMontage;
class UPalShooterComponent;

UCLASS(Blueprintable)
class UPalWeaponCombo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalShooterComponent> ShooterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> ComboMontage;
    
public:
    UPalWeaponCombo();

};

