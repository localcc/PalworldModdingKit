#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldSecurityLawTrigger.h"
#include "PalWorldSecurityLawTrigger_AreaInvasion.generated.h"

class AActor;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawTrigger_AreaInvasion : public UPalWorldSecurityLawTrigger {
    GENERATED_BODY()
public:
    UPalWorldSecurityLawTrigger_AreaInvasion();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifiedEventEnd(AActor* InvasionActor, const FGuid& AreaInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedEvent(AActor* InvasionActor, const FGuid& AreaInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Condition(AActor* InvasionActor, UPalIndividualCharacterHandle*& CriminalHandle);
    
};

