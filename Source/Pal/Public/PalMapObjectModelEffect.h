#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFastMapObjectModelEffectRepInfoArray.h"
#include "PalMapObjectModelEffect.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelEffect : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastMapObjectModelEffectRepInfoArray RepInfoArray;
    
public:
    UPalMapObjectModelEffect();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

