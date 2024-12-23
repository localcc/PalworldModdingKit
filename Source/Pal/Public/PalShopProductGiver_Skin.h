#pragma once
#include "CoreMinimal.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_Skin.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProductGiver_Skin : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Price;
    
public:
    UPalShopProductGiver_Skin();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

