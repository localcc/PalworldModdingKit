#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalNPCInteractConditionFunctions.generated.h"

UCLASS(Blueprintable)
class UPalNPCInteractConditionFunctions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPalNPCInteractConditionFunctions();
    UFUNCTION(BlueprintCallable)
    void SetOwner(UObject* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOwner() const;
    
};

