#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStatPalCount.generated.h"

class UFont;

UCLASS(Blueprintable)
class UPalStatPalCount : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
public:
    UPalStatPalCount();
};

