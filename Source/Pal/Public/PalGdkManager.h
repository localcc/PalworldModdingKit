#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGdkManager.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGdkManager : public UObject {
    GENERATED_BODY()
public:
    UPalGdkManager();

    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfileCard(const FString& UserId);
    
};

