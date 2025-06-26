#pragma once
#include "CoreMinimal.h"
#include "PalWorkProgress.h"
#include "PalWorkFishPond.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkFishPond : public UPalWorkProgress {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CraftSpeeds;
    
public:
    UPalWorkFishPond();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

