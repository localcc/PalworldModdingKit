#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalOrganizationType.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalGroupBase.h"
#include "PalGroupOrganization.generated.h"

UCLASS(Blueprintable)
class UPalGroupOrganization : public UPalGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalOrganizationType OrganizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BaseCampIds;
    
public:
    UPalGroupOrganization();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(FPalDamageResult DamageResult);
    
};

