#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalInstanceID.h"
#include "PalItemUseProcessor.generated.h"

class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class UPalItemUseProcessor : public UObject {
    GENERATED_BODY()
public:
    UPalItemUseProcessor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItemToCharacter_ServerInternal(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseItemToCharacter(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID);
    
};

