#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalLogType.h"
#include "PalBaseCampWorkerEventMasterData.h"
#include "PalDataTableRowName_BaseCampWorkerEventData.h"
#include "PalBaseCampWorkerEventBase.generated.h"

class APalCharacter;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable)
class UPalBaseCampWorkerEventBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_BaseCampWorkerEventData MasterDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogType logType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampWorkerEventMasterData MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> OverrideSleepFX;
    
public:
    UPalBaseCampWorkerEventBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTriggerEventBySanity(const float SanityValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTriggerEventByCharacter(const APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString Debug_CreateTextTriggerEventSanity();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText CreateNotifyMessageText(const FText& LocalizedFormatText, APalCharacter* Character);
    
};

