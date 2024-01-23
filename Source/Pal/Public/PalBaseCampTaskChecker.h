#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBaseCampTaskChecker.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampTaskChecker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* taskDataTable;
    
public:
    UPalBaseCampTaskChecker();
};

