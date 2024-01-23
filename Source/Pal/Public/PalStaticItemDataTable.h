#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStaticItemDataTable.generated.h"

class UPalStaticItemDataAsset;

UCLASS(Blueprintable)
class UPalStaticItemDataTable : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataAsset* DataAsset;
    
public:
    UPalStaticItemDataTable();
};

