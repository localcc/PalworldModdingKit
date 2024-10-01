#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FastPalIndividualCharacterHandleIdArray.h"
#include "PalGroupIndividualCharacterHandleIdArray.generated.h"

UCLASS(Blueprintable)
class UPalGroupIndividualCharacterHandleIdArray : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFastPalIndividualCharacterHandleIdArray IndividualCharacterHandleIds;
    
public:
    UPalGroupIndividualCharacterHandleIdArray();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

