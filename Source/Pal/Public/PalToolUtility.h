#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalToolUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalToolUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalToolUtility();
    UFUNCTION(BlueprintCallable)
    static void CopyFileOverride(const FString& sourceFileName, const FString& destFileName);
    
};

