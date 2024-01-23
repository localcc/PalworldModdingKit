#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalVisualEffectID.h"
#include "Templates/SubclassOf.h"
#include "PalVisualEffectDataBase.generated.h"

class UMaterialParameterCollection;
class UPalVisualEffectBase;

UCLASS(Blueprintable)
class UPalVisualEffectDataBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalVisualEffectID, TSoftClassPtr<UPalVisualEffectBase>> VisualEffectClassDataReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MosaicMaterialParameterCollection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalVisualEffectID, TSubclassOf<UPalVisualEffectBase>> VisualEffectClassDataAsset;
    
public:
    UPalVisualEffectDataBase();
    UFUNCTION(BlueprintCallable)
    FName GetMosaicKeyName();
    
};

