#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationPoint_QuestBase.h"
#include "PalLocationPoint_QuestStatic.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_QuestStatic : public UPalLocationPoint_QuestBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Range;
    
public:
    UPalLocationPoint_QuestStatic();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
};

