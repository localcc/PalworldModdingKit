#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemData.h"
#include "PalItemId.h"
#include "PalItemIDManager.generated.h"

class UPalStaticItemDataAsset;
class UPalStaticItemDataBase;
class UPalStaticItemDataTable;

UCLASS(Blueprintable)
class UPalItemIDManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataAsset* StaticItemDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData WoodItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData EggItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData PalUpgradeStoneItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData MoneyItemRowName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataTable* StaticItemDataTable;
    
public:
    UPalItemIDManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FName GetStaticItemIdPalEgg(const UObject* WorldContextObject, const FName CharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStaticItemDataBase* GetStaticItemData(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemData GetItemData(const FPalItemId& ItemId) const;
    
};

