#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalPlayerInputOneFlameCommandList.generated.h"

class UPalPlayerInputOneFlameCommand;

UCLASS(Blueprintable)
class PAL_API UPalPlayerInputOneFlameCommandList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalPlayerInputOneFlameCommand*> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
public:
    UPalPlayerInputOneFlameCommandList();

};

