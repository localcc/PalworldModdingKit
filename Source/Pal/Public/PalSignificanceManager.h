#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "PalSignificanceManager.generated.h"

class UObject;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapObjectUpdateDivideNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UnregisterCachedObjects;
    
public:
    UPalSignificanceManager();

};

