#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleRaidDetect.generated.h"

class UPalBaseCampModuleRaidDetect;
class UPalBaseCampRaidDetectorBase;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleRaidDetect : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidStateChanged, UPalBaseCampModuleRaidDetect*, Module);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidStateChanged OnRaidBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidStateChanged OnRaidEndDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampRaidDetectorBase*> Detectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsUnderRaid;
    
public:
    UPalBaseCampModuleRaidDetect();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderRaid() const;
    
};

