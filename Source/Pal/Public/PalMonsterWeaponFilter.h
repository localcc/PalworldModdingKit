#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalHitFilter.h"
#include "PalMonsterWeaponFilter.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalMonsterWeaponFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType Element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBlow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
public:
    UPalMonsterWeaponFilter();

};

