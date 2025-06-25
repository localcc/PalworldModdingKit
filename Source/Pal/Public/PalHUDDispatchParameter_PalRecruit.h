#pragma once
#include "CoreMinimal.h"
#include "OnRecruitDelegateDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalHUDDispatchParameter_PalRecruit.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_PalRecruit : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnRecruitDelegate OnRecruit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter PalSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CarreerTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AppealTextIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ContractFee;
    
    UPalHUDDispatchParameter_PalRecruit();

};

