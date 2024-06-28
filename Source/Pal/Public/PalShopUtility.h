#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalItemShopCreateDataRow.h"
#include "PalItemSlotIdAndNum.h"
#include "PalPalShopCreateDataRow.h"
#include "PalStaticItemIdAndNum.h"
#include "PalShopUtility.generated.h"

class APalPlayerCharacter;
class UObject;
class UPalShopBase;

UCLASS(Blueprintable)
class PAL_API UPalShopUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalShopUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LotteryItemShop(const UObject* WorldContextObject, const FName& ItemShopLotteryName, FName& OutShopName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPalShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalPalShopCreateDataRow& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetItemShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalItemShopCreateDataRow& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CreateNewPalShop(const UObject* WorldContextObject, const FPalPalShopCreateDataRow& createShopData, const FName& sharedShopKeyName, UPalShopBase*& outCreatedShop);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CreateNewItemShop(const UObject* WorldContextObject, const FPalItemShopCreateDataRow& createShopData, const FName& sharedShopKeyName, UPalShopBase*& outCreatedShop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSellFromStaticItemIDAndNum(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& staticItemIDAndNum, float SellRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSellFromSlotIdAndNum(const UObject* WorldContextObject, const FPalItemSlotIdAndNum& SlotIdAndNum, float SellRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcPalSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcPalSellPrice(const UObject* WorldContextObject, const FPalIndividualCharacterSaveParameter& SaveParameter, float SellRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcPalBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcItemSellPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcItemSellPrice(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& staticItemIDAndNum, float SellRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcItemBuyPriceBuffRate(const UObject* WorldContextObject, const APalPlayerCharacter* OwnerCharacter, FName MoneyItemData);
    
};

