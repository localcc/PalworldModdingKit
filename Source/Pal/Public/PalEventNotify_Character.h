#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalEventNotifyBase.h"
#include "PalEventNotifyCharacterDamagedDelegateDelegate.h"
#include "PalEventNotifyCharacterDeadDelegateDelegate.h"
#include "PalEventNotify_Character.generated.h"

class UObject;
class UPalEventNotify_Character;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalEventNotify_Character : public UPalEventNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyCharacterDamagedDelegate OnNotifyEventDamagedInServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyCharacterDeadDelegate OnNotifyEventDeadInServer;
    
    UPalEventNotify_Character();
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterSpawned_ServerInternal(UPalIndividualCharacterHandle* CharacterHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDead_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDamaged_ServerInternal(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotify_Character* GetEventNotify_Character(const UObject* WorldContextObject);
    
};

