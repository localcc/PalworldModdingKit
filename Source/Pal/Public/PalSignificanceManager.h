#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "PalSignificanceManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapObjectUpdateDivideNum;
    
public:
    UPalSignificanceManager();

};

