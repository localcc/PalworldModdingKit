#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalEventNotifySystem.generated.h"

class UPalEventNotifyBase;

UCLASS(Blueprintable)
class PAL_API UPalEventNotifySystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPalEventNotifyBase>> EventNotifyClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UPalEventNotifyBase>, UPalEventNotifyBase*> EventNotifyMap;
    
public:
    UPalEventNotifySystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalEventNotifyBase* GetEventNotify(TSubclassOf<UPalEventNotifyBase> Class) const;
    
};

