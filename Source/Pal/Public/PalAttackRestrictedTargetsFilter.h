#pragma once
#include "CoreMinimal.h"
#include "EPalAttackTargetsType.h"
#include "PalAttackFilter.h"
#include "PalAttackRestrictedTargetsFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAttackRestrictedTargetsFilter : public UPalAttackFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalAttackTargetsType> AttackTargetsTypeList;
    
    UPalAttackRestrictedTargetsFilter();

};

