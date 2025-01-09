#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_Character.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProductGiver_Character : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter ProductPalSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterStoredParameterId StoredCharacterParameterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ReservedPlayerUID;
    
public:
    UPalShopProductGiver_Character();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedBuyPal(FPalInstanceID CreatedPalInstanceID);
    
};

