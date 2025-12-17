#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "PalSignificanceManager.generated.h"

class UObject;
class UPalSignificanceUpdaterBase;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSignificanceUpdaterBase* MapObjectUpdater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UnregisterCachedObjects;
    
public:
    UPalSignificanceManager();

};

