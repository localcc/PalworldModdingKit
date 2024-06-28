#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_PalSaveParameter.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProduct_PalSaveParameter : public UPalShopProductBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter ProductPalSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ReservedPlayerUID;
    
public:
    UPalShopProduct_PalSaveParameter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedBuyPal(FPalInstanceID CreatedPalInstanceID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductPalParameter(FPalIndividualCharacterSaveParameter& outParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice(const FGuid& PlayerUId) const;
    
};

