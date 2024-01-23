#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDeadBodyManager.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalDeadBodyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> DeadPalList;
    
public:
    UPalDeadBodyManager();
    UFUNCTION(BlueprintCallable)
    void GetDeadPalList(TArray<UPalIndividualCharacterHandle*>& OutArray);
    
};

