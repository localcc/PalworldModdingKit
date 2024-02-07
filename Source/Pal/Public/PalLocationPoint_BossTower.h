#pragma once
#include "CoreMinimal.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_BossTower.generated.h"

class APalBossTower;

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_BossTower : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
public:
    UPalLocationPoint_BossTower();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBossTower* GetBossTower() const;
    
};

