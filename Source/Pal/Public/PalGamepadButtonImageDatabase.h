#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "PalGamepadButtonImageDatabase.generated.h"

class UDataTable;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class UPalGamepadButtonImageDatabase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GamepadButtonImageDataTable;
    
public:
    UPalGamepadButtonImageDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetBrussBySlateBrush(const UObject* WorldContextObject, FSlateBrush SlateBrush, FSlateBrush& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetBrussByImage(const UObject* WorldContextObject, UTexture2D* Image, FSlateBrush& OutData);
    
};

