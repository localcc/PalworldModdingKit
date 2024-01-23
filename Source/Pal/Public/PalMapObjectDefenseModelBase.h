#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectDefenseType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDefenseModelBase.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class UPalMapObjectDefenseModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseModelBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLauncherControlMapObject(APalMapObject*& OutMapObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectDefenseType GetDefenseType() const;
    
};

