#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDamageInfo.h"
#include "PalDamagePopUpManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalDamagePopUpManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddDamagePopupDelegate, const FPalDamageInfo&, DamageInfo, AActor*, Defender);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddDamagePopupDelegate OnAddDamagePopupDelegate;
    
    UPalDamagePopUpManager();
    UFUNCTION(BlueprintCallable)
    void AddDamagePopUp(const FPalDamageInfo& DamageInfo, AActor* Defender);
    
};

