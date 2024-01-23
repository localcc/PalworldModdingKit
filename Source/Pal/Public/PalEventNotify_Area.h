#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalEventNotifyBase.h"
#include "PalEventNotifyCharacterInvasionDelegateDelegate.h"
#include "PalEventNotify_Area.generated.h"

class AActor;
class APalTriggerAreaBase;
class UObject;
class UPalEventNotify_Area;

UCLASS(Blueprintable)
class PAL_API UPalEventNotify_Area : public UPalEventNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyCharacterInvasionDelegate OnNotifyEventBeginInvasionInServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEventNotifyCharacterInvasionDelegate OnNotifyEventEndInvasionInServer;
    
    UPalEventNotify_Area();
private:
    UFUNCTION(BlueprintCallable)
    void OnRegiterdArea_ServerInternal(APalTriggerAreaBase* TriggerBase);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAreaInvasion_ServerInternal(AActor* HitActor, const FGuid& AreaInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAreaInvasion_ServerInternal(AActor* HitActor, const FGuid& AreaInstanceId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotify_Area* GetEventNotify_Area(const UObject* WorldContextObject);
    
};

